#include "main.h"

/**
 * swap_int - it swaps the values of two integers
 *
 * @a: first input parameter
 * @b: second input parameter
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
