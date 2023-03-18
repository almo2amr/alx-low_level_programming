#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * description: it prints alphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
