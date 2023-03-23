#include "main.h"

/**
 * print_square - it prints a square Using the character #
 *
 * @size: it is the size of the square
 *
 * Return: Always 0 (Success)
*/
void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
			_putchar('#');
		_putchar('\n');
	}
}
