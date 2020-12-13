#include <stdio.h>
#include "vec.h"

#define IDENT 0
#define OP +
#define LEN 10

/* Implementation with maximum use of data abstraction */
void combine1(vec_ptr v, data_t *dest)
{
	long i;

	*dest = IDENT;
	for (i = 0; i < vec_length(v); i++) {
		data_t val;
		get_vec_element(v, i, &val);
		*dest = *dest OP val;
	}
}

/* Move call to vec_length out of loop */
void combine2(vec_ptr v, data_t *dest)
{
	long i;
    long length = vec_length(v);
	
	*dest = IDENT;
	for (i = 0; i < length; i++) {
		data_t val;
		get_vec_element(v, i, &val);
		*dest = *dest OP val;
	}
}

int main(int argc, const char *argv[])
{
	data_t result;
	data_t dt[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vec_rec vr = {LEN, dt};
	vec_ptr pvr = &vr;

	combine1(pvr, &result);
	printf("combine1: %ld\n", result);
	combine2(pvr, &result);
	printf("combine2: %ld\n", result);

	return 0;
}
