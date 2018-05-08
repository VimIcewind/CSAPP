#include <stdio.h>
#include <string.h>

/* Determine whether string s is longer than string t */
int strlonger(char *s, char *t) {
	return strlen(s) > strlen(t);
}

void test_strlonger()
{
	char *s0 = "Hi";
	char *s1 = "Hello";
	char *s2 = "World";

	printf("%d\n", strlonger(s0, s1));
	printf("%d\n", strlonger(s1, s0));
	printf("%d\n", strlonger(s1, s2));

}

int main(int argc, const char *argv[])
{
	test_strlonger();

	return 0;
}
