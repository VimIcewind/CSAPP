typedef unsigned long data_t;

#define COMP !=

int comp_unsigned_long(data_t a, data_t b)
{
	return a COMP b;
}
