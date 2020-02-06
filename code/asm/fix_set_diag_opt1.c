#define N 16

typedef int fix_matrix[N][N];

/* Set all diagonal elements to val */
void fix_set_diag_opt(fix_matrix A, int val)
{
	long i = 0;
	int *Abase = &A[0][0];
	long iend = N * (N+1);
	do {
		Abase[i] = val;
		i += (N + 1);
	} while (i != iend);
}
