#include <stdio.h>

long leaf(long y)
{
	return y + 2;
}

long top(long x)
{
	return 2 * leaf(x - 5);
}

int main(int argc, char *argv[])
{
	long rval = top(100);
	printf("top(100) = %ld", rval);
	return 0;
}
