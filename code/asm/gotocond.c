void gotocond(long a, long *p)
{
	if (p == 0)
		goto end;
	if (*p >= a)
		goto end;
	*p = a;
end:
	return;
}
