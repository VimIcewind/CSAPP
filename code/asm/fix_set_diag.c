#define N 16

typedef int fix_matrix[N][N];

/* Set all diagonal elements to val */
void fix_set_diag(fix_matrix A, int val)
{
	long i;
	for (i = 0; i < N; i++)
		A[i][i] = val;
}
