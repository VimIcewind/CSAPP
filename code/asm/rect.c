#include <stdio.h>

struct rect {
	long llx;        /* X coordinate of lower-left corner */
	long lly;        /* Y coordinate of lower-left corner */
	unsigned long width;   /* Width (in pixels) */
	unsigned long height;  /* Height (in pixels) */
	unsigned color;        /* Coding of color */
};

long area(struct rect *rp)
{
	return (*rp).width * (*rp).height;
}

int main(int argc, char *argv[])
{
	struct rect r = {0, 0, 10, 20, 0xFF00FF};

	printf("r.llx = %ld\n", r.llx);
	printf("r.lly = %ld\n", r.lly);
	printf("r.width = %ld\n", r.width);
	printf("r.height = %ld\n", r.height);
	printf("r.color = 0x%x\n", r.color);
	printf("area(r) = %ld\n", area(&r));
	return 0;
}
