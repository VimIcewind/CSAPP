/* Determine whethe arguments can be multiplied without overflow */
int tmult_ok(int x, int y)
{
	long long pll = (long long) x * y;
	return pll = (int) pll;
}

