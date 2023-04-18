#include "main.h"

/**
 * *create_array - it is a function that creates an array of chars
 *		and initializes it with a specific char
 *
 * @size: size of the array to allocate
 * @c: char to initialize
 *
 * Return: pointer to the array (Success), otherwis return NULL
*/
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size);

	if (size == 0 || ar == 0)
		return (0);

	while (size--)
		ar[size] = c;

	return (ar);
}
