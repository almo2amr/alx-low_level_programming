#include "main.h"

/**
 * _strlen_recursion - it returns the length of a string
 *
 * @s: pointer to the string to be measured
 *
 * Return: the lenghth of string
*/
int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s > '\0')
	{
		t += _strlen_recursion(s + 1) + 1;
	}
	return (t);
}
