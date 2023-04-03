#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - it prints the sum of the two diagonals
 *	of a square matrix of integers
 *
 * @a: input array of int types
 * @size: input size of array
 *
 * Return: Nothing
*/
void print_diagsums(int *a, int size)
{
	int r, sum1 = 0, sum2 = 0;

	for (r = 0; r < size; r++)
	{
		sum1 += a[r];
		sum2 += a[size - r - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
