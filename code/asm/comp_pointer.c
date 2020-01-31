typedef long * data_t;

#define COMP !=

int comp_pointer(data_t a, data_t b)
{
	return a COMP b;
}
