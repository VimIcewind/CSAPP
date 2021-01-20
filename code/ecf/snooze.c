#include <stdio.h>
#include <unistd.h>

unsigned int snooze(unsigned int secs);

int main(void)
{
	printf("Just sleep 5 seconds...\n");
	snooze(5);
	printf("Done\n");

	return 0;
}

unsigned int snooze(unsigned int secs)
{
	unsigned int rc = sleep(secs);

	printf("Slept for %d of %d secs.\n", secs-rc, secs);

	return rc;
}
