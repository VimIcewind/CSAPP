#include <stdio.h>

struct node_s {
	struct node_s *left;
	struct node_s *right;
	double data[2];
};

union node_u {
	struct {
		union node_u *left;
		union node_u *right;
	} internal;
	double data[2];
};

int main(int argc, char *argv[])
{
	printf("sizeof(struct node_s) is %ld\n", sizeof(struct node_s));
	printf("sizeof(union node_u) is %ld\n", sizeof(union node_u));
	return 0;
}
