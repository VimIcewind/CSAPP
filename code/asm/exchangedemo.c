#include <stdio.h>

long exchange(long *xp, long y);

int main(int argc, const char *argv[])
{
	long a = 4, b = 3;

	printf("Before exchange:\n");
	printf("a = %ld, b = %ld\n", a, b);
	b = exchange(&a, 3);
	printf("After exchange:\n");
	printf("a = %ld, b = %ld\n", a, b);
	return 0;
}
