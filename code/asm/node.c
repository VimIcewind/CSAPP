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

typedef enum {N_LEAF, N_INTERNAL} nodetype_t;

struct node_t {
	nodetype_t type;
	union {
		struct {
			struct node_t *left;
			struct node_t *right;
		} internal;
	} info;
};

int main(int argc, char *argv[])
{
	printf("sizeof(struct node_s) is %ld\n", sizeof(struct node_s));
	printf("sizeof(union node_u) is %ld\n", sizeof(union node_u));
	printf("sizeof(struct node_t) is %ld\n", sizeof(struct node_t));
	return 0;
}
