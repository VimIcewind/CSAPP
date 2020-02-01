long fact_while_jm_goto(long n)
{
	long result = 1;
	goto test;
loop:
	result *= n;
	n = n - 1;
test:
	if (n > 1)
		goto loop;
	return result;
}
