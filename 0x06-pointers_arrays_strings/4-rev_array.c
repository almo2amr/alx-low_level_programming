#include "main.h"

/**
 * reverse_array - it reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: number of elements to swap
*/
void reverse_array(int *a, int n)
{
	int i, g, e;

	for (i = 0, g = (n - 1); i < g; i++, g--)
	{
		e = a[i];
		a[i] = a[g];
		a[g] = e;
	}
}
