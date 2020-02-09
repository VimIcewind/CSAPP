#include <stdio.h>

struct {
	char *a;
	short b;
	double c;
	char d;
	float e;
	char f;
	long g;
	int h;
} rec;

struct {
	char *a;
	short b;
	char d;
	char f;
	int h;
	double c;
	long g;
	float e;
} rec_O;

int main(int argc, char *argv[])
{
	printf("sizeof(struct rec) is %ld\n", sizeof(rec));
	printf("sizeof(struct rec_O) is %ld\n", sizeof(rec_O));
	return 0;
}
