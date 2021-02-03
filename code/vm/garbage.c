#include "csapp.h"

void garbage(void)
{
	int *p = (int *)Malloc(15213);

	return; /* Array p is garbage at this point */
}

int main(int argc, char *argv[])
{
	garbage();

	return 0;
}
