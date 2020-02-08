#include <stdio.h>

struct S3 {
	char c;
	int i[2];
	double v;
};

union U3 {
	char c;
	int i[2];
	double v;

};

int main(int argc, char *argv[])
{
	struct S3 s = {'s', {1, 2}, 3.14};
	struct S3 *ps = &s;
	union U3 u = {3.14};
	union U3 *pu = &u;

	printf("sizeof(struct S3) is %ld\n", sizeof(struct S3));
	printf("sizeof(struct U3) is %ld\n", sizeof(union U3));
	printf("&ps->c is %p\n&ps->i[0] is %p\n&ps->v is %p\n", &ps->c, &ps->i[0], &ps->v);
	printf("&pu->c is %p\n&pu->i[0] is %p\n&pu->v is %p\n", &pu->c, &pu->i[0], &pu->v);
	return 0;
}
