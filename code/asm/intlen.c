#include <stdio.h>
#include <string.h>

int len(char *s) {
	return strlen(s);
}

void iptoa(char *s, long *p)
{
	long val = *p;
	sprintf(s, "%ld", val);
}

int intlen(long x)
{
	long v;
	char buf[12];
	v = x;
	iptoa(buf, &v);
	return len(buf);
}
