typedef int data_t;

#define TEST !=

int test_int(data_t a)
{
	return a TEST 0;
}
