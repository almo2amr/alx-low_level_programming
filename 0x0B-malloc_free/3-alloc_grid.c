#include "main.h"

/**
 * **alloc_grid - it is a function that returns a pointer to
 *	a 2 dimensional array of integers
 *
 * @width: it is width of matrix (integer)
 * @height: it is height of matrix (integer)
 *
 * Return: 2 dimensional array (matrix), otherwise return NULL
*/
int **alloc_grid(int width, int height)
{
	int **array, t, r;

	array = malloc(sizeof(*array) * height);

	if (width <= 0 || height <= 0 || array == 0)
	{
		return (NULL);
	}
	else
	{
		for (t = 0; t < height; t++)
		{
			array[t] = malloc(sizeof(**array) * width);
			if (array[t] == 0)
			{
				while (t--)
					free(array[t]);
				free(array);
				return (NULL);
			}
			for (r = 0; r < width; r++)
				array[t][r] = 0;
		}
	}

	return (array);
}
