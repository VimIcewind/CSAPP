#include <stdio.h>

int fun(int x, int *p)
{
	*p = x;
	return x;
}


int main(int argc, char *argv[])
{
	int y = 1;
	int (*fp)(int, int *);
	fp = fun;
	int result = fp(3, &y);
	printf("result is %d\n", result);
	return 0;
}
