#include "main.h"

/**
 * *_strstr - it locates a substring
 *
 * @haystack: input string
 * @needle: input substring
 *
 * Return: a pointer to the beginning of the located substring,
 *	or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *r = needle;

		while (*t == *r && *r != '\0')
		{
			t++;
			r++;
		}
		if (*r == '\0')
			return (haystack);
	}

	return (0);
}
