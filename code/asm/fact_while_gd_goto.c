long fact_while_gd_goto(long n)
{
	long result = 1;
	if (n <= 1)
		goto done;
loop:
	result *= n;
	n = n - 1;
	if (n != 1)
		goto loop;
done:
	return result;
}
