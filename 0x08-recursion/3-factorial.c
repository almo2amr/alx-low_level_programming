#include "main.h"

/**
 * factorial - it is a function that returns the factorial of a given number
 *
 * @n: the number to return the factorial of it
 *
 * Return: the factorial of the number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
return (n * factorial(n - 1));
}
