#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("pid is %d\n", getpid());
	printf("pgrp is %d\n", getpgrp());
	setpgid(0, 0);
	printf("pid is %d\n", getpid());
	printf("pgrp is %d\n", getpgrp());

	return 0;
}
