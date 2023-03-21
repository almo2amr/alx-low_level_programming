#include "main.h"

/**
 * main - Entry Point
 *
 * description: print alphabet utilizes on the _putchar function
 *	to print from a - z
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
