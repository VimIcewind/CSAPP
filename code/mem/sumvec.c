#include <stdio.h>

#define N 10

int sumvec(int v[N])
{
	int i, sum = 0;

	for (i = 0; i < N; i++)
		sum += v[i];

	return sum;
}

int main(int argc, const char *argv[])
{
	int a[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	printf("sum = %d", sumvec(a));
	return 0;
}
