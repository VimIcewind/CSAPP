#include <stdio.h>

int main(int argc, const char *argv[])
{
	int x = -1;
	unsigned u = 2147483648; /* 2 to the 31st */

	printf("x = %u = %d\n", x, x);
	printf("u = %u = %d\n", u, u);
	
	return 0;
}

