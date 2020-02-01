long fact_do_goto(long n)
{
	long result = 1;
loop :
	result *= n;
	n = n - 1;
	if (n > 1)
		goto loop;
	return result;
}
