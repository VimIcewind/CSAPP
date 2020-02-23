double funct3(int *ap, double b, long c, float *dp)
{
	double result;
	int a = *ap;
	float d = *dp;

	if (b > a) {
		result = c * d;
	} else {
		result = c + 2 * d;
	}
	return result;
}
