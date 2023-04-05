#include "main.h"

/**
 * _sqrt_recursion - it returns the natural square root of a number
 *
 * @n: the number to return the natural sqaure root of it
 * @v: the square root of the number
 *
 * Return: the result
*/
int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - it returns the square root of a number
 *
 * @n: the number to return the sqaure root of it
 * @v: the square root of the number
 *
 * Return: the result
*/
int square(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (square(n, v + 1));
	}
	else
	{
		return (-1);
	}
}
