#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("Just pause...\n");
	fflush(stdout);
	pause();
	printf("Done\n");

	return 0;
}
