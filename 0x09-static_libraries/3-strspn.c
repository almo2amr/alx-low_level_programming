#include "main.h"

/**
 * _strspn - it is a function that gets the length of a prefix substring
 *
 * @s: input string
 * @accept: input bytes
 *
 * Return: unsigned integer
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r, j;

	for (r = 0; s[r] != '\0'; r++)
	{
		for (j = 0; accept[j] != s[r]; j++)
		{
			if (accept[j] == '\0')
				return (r);
		}
	}
	return (r);
}
