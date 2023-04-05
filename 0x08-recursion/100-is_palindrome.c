#include "main.h"

/**
 * last_index - it returns last index of a string
 *
 * @s: input string
 *
 * Return: integer
*/
int is_palindrome(char *s);
int chaeck(int *s, int b, int e, int m);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - it is a function that checks
 *		 if a string is a palindrome or not
 *
 * @s: the string to be checked
 *
 * Return: returns 1 if a string is a palindrome
 *	otherwise return 0
*/
int is_palindrome(char *s)
{
	int e = last_index(s);

	return (check(s, 0, e - 1, e % 2));
}

/**
 * check - it checks for palindrome
 *
 * @s: input string
 * @b: integer moves from right to left
 * @e: integer that rev to b
 * @m: integer
 *
 * Return: returns 1 if it is a palindrome, otherwise return 0
*/
int check(int *s, int b, int e, int m)
{
	if ((b == e && m != 0) || (b == e + 1 && m == 0))
	{
		return (1);
	}
	else if (s[b] != s[e])
	{
		return (0);
	}
	else
		return (check(s, b + 1, e - 1, m));
}
