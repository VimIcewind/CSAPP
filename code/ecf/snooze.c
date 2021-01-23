#include "csapp.h"

void sigint_handler(int sig)
{
	return;
}

unsigned int snooze(unsigned int secs)
{
	unsigned int rc = sleep(secs);

	printf("\nSlept for %d of %d secs.\n", secs-rc, secs);

	return rc;
}

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("Usage %s num\n", argv[0]);
		exit(0);
	}
	if (signal(SIGINT, sigint_handler) == SIG_ERR)
		unix_error("signal error");
	printf("Just sleep 5 seconds...\n");
	snooze(atoi(argv[1]));

	return 0;
}
