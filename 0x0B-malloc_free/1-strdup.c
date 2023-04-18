#include "main.h"

/**
 * *_strdup - it  returns a pointer to a newly allocated space in memory
 *	which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: if success return the copied string, otherwise return NULL
*/
char *_strdup(char *str);
{
	int i = 0, length = 0;
	char *cp;

	if (str == NULL)
		return (NULL);

	for (; str[length] != '\0'; length++)
	;

	cp = malloc(length * sizeof(*str) + 1);

	if (cp == 0)
		return (NULL);

	else
	{
		for (; i < length; i++)
		       cp[i] = str[i];
	}
	return (cp);
}
