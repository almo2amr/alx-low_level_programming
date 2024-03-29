#include "main.h"

/**
 * print_triangle - it prints a triangle
 *
 * @size: it is the size of the triangle
 *
 * Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if ((x + y) <= size)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
