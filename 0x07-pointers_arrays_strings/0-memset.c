#include "main.h"

/**
 * *_memset - it fills memory with a constant byte
 *
 * @s: pointer to put the constant byte
 * @b: constant byte
 * @n: number of bytes to use
 *
 * Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
