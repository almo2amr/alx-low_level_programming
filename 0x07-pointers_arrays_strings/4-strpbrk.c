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
	int i, r;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		r = 0;
		while (accept[r] != '\0')
		{
			if (accept[r] == s[i])
			{
				p = &s[i];
				return (p);
			}
			r++;
		}
		i++;
	}
	return (0);
}
