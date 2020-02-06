/* Compute i, k of variable matrix product */
int var_prod_ele_opt(long n, int A[n][n], int B[n][n], long i, long k)
{
	int *Arow = A[i];
	int *Bptr = &B[0][k];
	int result = 0;
	long j;

	for (j = 0; j < n; j++) {
		result += Arow[j] * *Bptr;
		Bptr += n;
	}

	return result;
}
