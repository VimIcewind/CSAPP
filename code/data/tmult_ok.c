/* Determine whethe arguments can be multiplied without overflow */
int tmult_ok(int x, int y)
{
	int p = x * y;
	/* Either x is zero, or dividing p by x gives y */
	return !x || p/x == y;
}
