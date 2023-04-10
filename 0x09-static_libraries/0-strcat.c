#include "main.h"

/**
 * *_strcat - it is a function that concatenates two strings
 *
 * @dest: pointer to the destnation input
 * @src: pointer to source input
 *
 * Return: pointer to the resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);
}
