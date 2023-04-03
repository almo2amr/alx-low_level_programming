#include "main.h"

/**
 * *_strpbrk - it searches a string for any of a set of bytes
 *
 * @s: input string
 * @accept: input bytes
 *
 * Return: a pointer to the byte in s that matches one of the
 *	bytes in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[r])
				return (s);
		}
		s++;
	}
	return ('\0');
}
