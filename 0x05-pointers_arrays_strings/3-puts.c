#include "main.h"

/**
 * _puts - it prints a string, followed by a new line, to stdout
 *
 * @str: string parameter should be printed
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
