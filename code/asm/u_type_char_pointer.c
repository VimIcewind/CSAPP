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

void get(u_type *up, char **dest) {
	*dest = &up->t1.w;
}
