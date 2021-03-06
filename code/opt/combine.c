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

/* Direct access to vector data */
void combine3(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	data_t *data = get_vec_start(v);

	*dest = IDENT;
	for (i = 0; i < length; i++) {
		*dest = *dest OP data[i];
	}
}

/* Accumulate result in local variable */
void combine4(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	data_t *data = get_vec_start(v);
	data_t acc = IDENT;

	for (i = 0; i < length; i++) {
		acc = acc OP data[i];
	}
	*dest = acc;
}

/* Include bonds check in loop */
void combine4b(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	data_t acc = IDENT;

	for (i = 0; i < length; i++) {
		if (i >= 0 && i < v->len) {
			acc = acc OP v->data[i];
		}
	}
	*dest = acc;
}

/* 2 x 1 loop unrolling */
void combine5(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	long limit = length - 1;
	data_t *data = get_vec_start(v);
	data_t acc = IDENT;

	/* Combine 2 elements at a time */
	for (i = 0; i < limit; i+=2) {
		acc = (acc OP data[i]) OP data[i+1];
	}

	/* Finish any remaining elements */
	for (; i < length; i++) {
		acc = acc OP data[i];
	}
	*dest = acc;
}

/* 2 x 2 loop unrolling */
void combine6(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	long limit = length - 1;
	data_t *data = get_vec_start(v);
	data_t acc0 = IDENT;
	data_t acc1 = IDENT;

	/* Combine 2 elements at a time */
	for (i = 0; i < limit; i+=2) {
		acc0 = acc0 OP data[i];
		acc1 = acc1 OP data[i+1];
	}

	/* Finish any remaining elements */
	for (; i < length; i++) {
		acc0 = acc0 OP data[i];
	}
	*dest = acc0 OP acc1;
}

/* 2 x 1a loop unrolling */
void combine7(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	long limit = length - 1;
	data_t *data = get_vec_start(v);
	data_t acc = IDENT;

	/* Combine 2 elements at a time */
	for (i = 0; i < limit; i+=2) {
		acc = acc OP (data[i] OP data[i+1]);
	}

	/* Finish any remaining elements */
	for (; i < length; i++) {
		acc = acc OP data[i];
	}
	*dest = acc;
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
	combine3(pvr, &result);
	printf("combine3: %ld\n", result);
	combine4(pvr, &result);
	printf("combine4: %ld\n", result);
	combine4b(pvr, &result);
	printf("combine4b: %ld\n", result);
	combine5(pvr, &result);
	printf("combine5: %ld\n", result);
	combine6(pvr, &result);
	printf("combine6: %ld\n", result);
	combine7(pvr, &result);
	printf("combine7: %ld\n", result);

	return 0;
}
