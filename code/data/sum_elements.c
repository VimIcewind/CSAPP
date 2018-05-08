#include <stdio.h>

float sum_elements(float a[], unsigned length)
{
	int i;
	float result = 0;

	for (i = 0; i < length; i++)
		result += a[i];
	return result;
}

int main(int argc, const char *argv[])
{
	float a[] = {};

	printf("%f\n", sum_elements(a, 0));
	return 0;
}
