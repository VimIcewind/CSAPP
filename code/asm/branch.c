long loop(long l)
{
	while (l > 0) {
		l >>= 1;
	}
	return l;
}

int main(int argc, char *argv[])
{
	loop(8);
	return 0;
}
