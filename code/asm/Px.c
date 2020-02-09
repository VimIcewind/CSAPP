#include <stdio.h>

struct P1 {
	int i;
	char c;
	int j;
	char d;
};

struct P2 {
	int i;
	char c;
	char d;
	long j;
};

struct P3 {
	short w[3];
	char c[3];
};

struct P4 {
	short w[5];
	char *c[3];
};

struct P5 {
	struct P3 a[2];
	struct P2 t;
};

int main(int argc, char *argv[])
{
	printf("sizeof (struct P1) is %ld\n", sizeof(struct P1));
	printf("sizeof (struct P2) is %ld\n", sizeof(struct P2));
	printf("sizeof (struct P3) is %ld\n", sizeof(struct P3));
	printf("sizeof (struct P4) is %ld\n", sizeof(struct P4));
	printf("sizeof (struct P5) is %ld\n", sizeof(struct P5));
	return 0;
}
