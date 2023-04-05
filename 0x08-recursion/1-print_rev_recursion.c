#include "main.h"

/**
 * _print_rev_recursion - it is a function that prints a string in reverse
 *
 * @s: input the string to be printed
 *
 * Return: Nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
