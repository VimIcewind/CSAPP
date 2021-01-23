#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sig_handler(int signum)
{
	printf("Receive signal!\n");
}

int main(void)
{
	int t;

	signal(SIGALRM, sig_handler);
	printf("alarm(5)\n");
	t = alarm(5);
	printf("sleep(10)\n");
	sleep(10);
	printf("%d seconds should done.\n", t);

	return 0;
}
