#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, const char *argv[])
{
	printf("PID is %d\n", getpid());
	printf("PPID is %d\n", getppid());

	return 0;
}
