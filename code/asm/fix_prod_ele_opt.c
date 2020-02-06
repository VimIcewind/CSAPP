#define N 16

typedef int fix_matrix[N][N];

/* Compute i, k of fixed matrix product */
int fix_prod_ele_opt(fix_matrix A, fix_matrix B, long i, long k)
{
	int *Aptr = &A[i][0];    /* Points to elements in row i of A */
	int *Bptr = &B[0][k];    /* Points to elements in column k of B */
	int *Bend = &B[N][k];    /* Marks stopping point for Bptr */
	int result = 0;

	do {                               /* No need for initial test */
		result += *Aptr * *Bptr;   /* Add next product to sum  */
		Aptr++;                    /* Move Aptr to next column */
		Bptr += N;                 /* Move Bprt to next row    */
	} while (Bptr != Bend);            /* Test for stopping poing  */

	return result;
}
