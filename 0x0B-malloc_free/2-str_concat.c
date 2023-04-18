#include "main.h"

/**
 * _strlen - it finds size of a string
 *
 * @str: string
 *
 * Return: size of string
*/
int _strlen(char *str)
{
	int length = 0;

	for (; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * *str_concat - it is a function that concatenates two strings
 *
 * @s1: string to concatenates
 * @s2: string to concatenates
 *
 * Return: pointer to the new string, otherwise return NULL
*/
char *str_concat(char *s1, char *s2)
{
	int length1, length2, i;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	length1 = _strlen(s1);
	length2 = _srtlen(s2);
	n = malloc((length1 + length2) * sizeof(char) + 1);
	if (n == 0)
		return (0);

	for (i = 0; i <= length1 + length2; i++)
	{
		if (i < length1)
			n[i] = s1[i];
		else
			n[i] = s2[i - length1];
	}
	n[i] = '\0';
	return (n);
}
