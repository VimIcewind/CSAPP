long fact_for_gd_goto(long n)
{
	long i = 2;
	long result = 1;
	if (n <= 1)
		goto done;
loop:
	result *= i;
	i++;
	if (i <= n)
		goto loop;
done:
	return result;
}
