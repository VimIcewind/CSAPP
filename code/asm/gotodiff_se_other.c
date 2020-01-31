long lt_cnt = 0;
long ge_cnt = 0;

long gotodiff_se(long x, long y)
{
	long result;

	if (x < y)
		goto x_l_y;
	ge_cnt++;
	result = x - y;
	return result;
x_l_y:
	lt_cnt++;
	result = y - x;
	return result;
}
