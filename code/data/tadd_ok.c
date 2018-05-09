/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y)
{
	return  ((x < 0 && y < 0 && x + y >= 0) || (x >= 0 && y >= 0 && x + y < 0)) ? 0 : 1;
}
