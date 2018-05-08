#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
}

void show_int(int x)
{
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val)
{
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

void test_twoscomplement()
{
	short x = 12345;
	short mx = -x;

	show_bytes((byte_pointer) &x, sizeof(short));
	show_bytes((byte_pointer) &mx, sizeof(short));
}

void test_expand()
{
	short sx = -12345;	/* -12345 */
	unsigned short usx = sx;/*  53191 */
	int x = sx;		/* -12345 */
	unsigned ux = usx;	/*  53191 */

	printf("sx = %d:\t", sx);
	show_bytes((byte_pointer) &sx, sizeof(short));
	printf("usx = %u:\t", usx);
	show_bytes((byte_pointer) &usx, sizeof(unsigned short));
	printf("x = %d:\t", x);
	show_bytes((byte_pointer) &x, sizeof(int));
	printf("ux = %u:\t", ux);
	show_bytes((byte_pointer) &ux, sizeof(unsigned));
}

int main(int argc, const char *argv[])
{
	test_show_bytes(12345);
	test_twoscomplement();
	test_expand();
	return 0;
}
