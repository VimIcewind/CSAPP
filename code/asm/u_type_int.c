typedef union {
	struct {
		long u;
		short v;
		char w;
	} t1;
	struct {
		int a[2];
		char *p;
	} t2;
} u_type;

void get(u_type *up, int *dest) {
	*dest = up->t2.a[up->t1.u];
}
