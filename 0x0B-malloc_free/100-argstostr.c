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
 * *argstostr - it is a function that concatenates
 *	all the arguments of your program
 *
 * @ac: it is number of arguments
 * @av: it is array of arguments
 *
 * Return: pointer to string, otherwise returns NULL
*/
char *argstostr(int ac, char **av)
{
	int e = 0, r = 0, t = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; e < ac; e++, r++)
		r += _strlen(av[e]);

	str = malloc(sizeof(char) * r + 1);
	if (str == 0)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (t = 0; av[e][t] != '\0'; t++, k++)
			str[k] = av[e][t];

		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
