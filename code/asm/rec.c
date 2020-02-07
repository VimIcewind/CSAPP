#include <stdio.h>

struct rec {
	int i;
	int j;
	int a[2];
	int *p;
};

void show_rec(struct rec *r)
{
	printf("{%d, %d, {%d, %d}, %p}\n", r->i, r->j, r->a[0], r->a[1], r->p);
}

int main(int argc, char *argv[])
{
	int a;
	struct rec record = {1, 2, {3, 4}, &a};
	struct rec *r = &record;

	show_rec(r);
	r->j = r->i;
	show_rec(r);

	printf("&(r->a[1]) is %p\n", &(r->a[1]));
	r->p = &r->a[r->i + r->j];
	show_rec(r);

	return 0;
}
