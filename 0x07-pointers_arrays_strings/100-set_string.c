#include "main.h"

/**
 * set_string - it is a function that sets the value of a pointer to a char
 *
 * @s: it is pointer to pointer
 * @to: it is pointer char
 *
 * Return: Nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
