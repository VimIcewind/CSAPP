#include <stdio.h>

struct rect {
	long llx;        /* X coordinate of lower-left corner */
	long lly;        /* Y coordinate of lower-left corner */
	unsigned long width;   /* Width (in pixels) */
	unsigned long height;  /* Height (in pixels) */
	unsigned color;        /* Coding of color */
};

int main(int argc, char *argv[])
{
	struct rect r;
	r.llx = r.lly = 0;
	r.color = 0xFF00FF;
	r.width = 10;
	r.height = 20;

	printf("r.llx = %ld\n", r.llx);
	printf("r.lly = %ld\n", r.lly);
	printf("r.width = %ld\n", r.width);
	printf("r.height = %ld\n", r.height);
	printf("r.color = %d\n", r.color);
	return 0;
}
