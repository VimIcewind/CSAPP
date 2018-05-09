#include <stdio.h>
#include <limits.h>

/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y)
{
	return  ((x < 0 && y < 0 && x + y >= 0) || (x >= 0 && y >= 0 && x + y < 0)) ? 0 : 1;
}

/* Determine whether arguments can be subtracted without overflow */
int tsub_ok(int x, int y)
{
	if (y > INT_MIN)
		return tadd_ok(x, -y);
	else if (x <= 0)
		return 0;
	else
		return 1;
}

void test_tsub_ok()
{
	int x, y;

	x = INT_MIN;
	y = INT_MIN;
	printf("%d\n", tsub_ok(x, y));
	x = INT_MAX;
	y = INT_MIN;
	printf("%d\n", tsub_ok(x, y));
	x = INT_MIN;
	y = INT_MAX;
	printf("%d\n", tsub_ok(x, y));
	x = 0;
	y = INT_MIN;
	printf("%d\n", tsub_ok(x, y));
}

int main(int argc, const char *argv[])
{
	test_tsub_ok();
	return 0;
}
