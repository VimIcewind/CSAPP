int div16(int x)
{
	/* Compute bias to be either 0 (x >= 0) or is 15 (x < 0) */
	int bias = (x >> 31) & 0xF;
	return (x + bias) >> 4;
}
