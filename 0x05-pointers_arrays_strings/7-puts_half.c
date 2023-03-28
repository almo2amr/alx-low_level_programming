#include "main.h"

/**
 * puts_half - it prints the second half of a string
 *
 * description: If the number of characters is odd, it prints (length - 1) / 2
 *
 * @str: char attay string type
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
