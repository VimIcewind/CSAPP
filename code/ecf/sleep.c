#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("Just sleep 10 seconds...\n");
	fflush(stdout);
	sleep(10);
	printf("Done\n");

	return 0;
}
