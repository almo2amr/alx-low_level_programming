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

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		if (x != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
