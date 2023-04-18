#include "main.h"

/**
 * *_strdup - it  returns a pointer to a newly allocated space in memory
 *	which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: if success return the copied string, otherwise return NULL
*/
char *_strdup(char *str)
{
	unsigned int a, size;
	char *cp;

	a = 0;
	size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;
	cp = malloc(sizeof(char) * (size + 1));

	if (cp == NULL)
		return (NULL);

	while ((cp[a] = str[a]) != '\0')
		a++;

	return (cp);
}
