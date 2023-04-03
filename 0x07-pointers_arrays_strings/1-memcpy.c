#include "main.h"

/**
 * *_memcpy - it is a function that copies memory area
 *
 * @dest: memory area where is stored
 * @src: memory area where is copied (source)
 * @n: number of bytes to be copied from src
 *
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}

	return (dest);
}
