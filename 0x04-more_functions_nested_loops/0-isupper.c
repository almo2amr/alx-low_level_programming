#include "main.h"

/**
 * _isupper - it checks c for uppercase character
 *
 * @c: input for alphabet
 *
 * Return: 1 if it is uppercase, 0 if it is not
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
