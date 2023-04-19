#include "main.h"

/**
 * words_count - it is a function that counts
 *	the number of words in a string
 *
 * @st: string to count
 *
 * Return: number of word
*/
int words_count(char *st)
{
	int e, num = 0;

	for (e = 0; st[e]; e++)
	{
		if (st[e] == ' ')
		{
			if (st[e + 1] != ' ' && st[e + 1] != '\0')
				num++;
		}
		else if (e == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * **strtow - it is a function that splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to array of string, otherwise return NULL
*/
char **strtow(char *str)
{
	int e, r, t, y, num = 0, words = 0;
	char **array;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = words_count(str);
	if (num == 1)
		return (NULL);
	array = (char **)malloc(num * sizeof(char *));
	if (array == NULL)
		return (NULL);
	array[num - 1] = NULL;
	e = 0;
	while (str[e])
	{
		if (str[e] != ' ' && (e == 0 || str[e - 1] == ' '))
		{
			for (r = 1; str[e + r] != ' ' && str[e + r]; r++)
				;
			r++;
			array[words] = (char *)malloc(r * sizeof(char));
			r--;
			if (array[words] == NULL)
			{
				for (t = 0; t < words; t++)
					free(array[t]);
				free(array[num - 1]);
				free(array);
				return (NULL);
			}
			for (y = 0; y < r; y++)
				array[words][y] = str[e + y];
			array[words][y] = '\0';
			words++;
			e += r;
		}
		else
			e++;
	}
	return (words);
}
