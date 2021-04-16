#include "csapp.h"

#define MAXTHREADS 32

void *sum_local(void *vargp); /* Thread toutine */

/* Global shared variables */
long gsum = 0;		/* Global sum */
long nelems_per_thread; /* Number of elements to sum */
long psum[MAXTHREADS];  /* Sum of thread */

int main(int argc, char **argv)
{
	long i, nelems, log_nelems, nthreads, myid[MAXTHREADS];
	pthread_t tid[MAXTHREADS];

	/* Get input arguments */
	if (argc != 3) {
		printf("Usage: %s <nthreads> <log_nelems>\n", argv[0]);
		exit(0);
	}
	nthreads = atoi(argv[1]);
	log_nelems = atoi(argv[2]);
	nelems = (1L << log_nelems);
	nelems_per_thread = nelems / nthreads;

	/* create peer threads and wait for them to finish */
	for (i = 0; i < nthreads; i++) {
		myid[i] = i;
		Pthread_create(&tid[i], NULL, sum_local, &myid[i]);
	}
	for (i = 0; i < nthreads; i++) {
		Pthread_join(tid[i], NULL);
		gsum += psum[i];
	}

	/* Check final answer */
	if (gsum != (nelems * (nelems-1))/2)
		printf("Error: result=%ld\n", gsum);
	exit(0);
}

/* Thread routine for psum-local.c */
void *sum_local(void *vargp)
{
	long myid = *((long *)vargp);		/* Extract the thread ID */
	long start = myid * nelems_per_thread;	/* Start element index */
	long end = start + nelems_per_thread;	/* End element index */
	long i, sum = 0;

	for (i = start; i < end; i++) {
		sum += i;
	}
	psum[myid] = sum;
	return NULL;
}
