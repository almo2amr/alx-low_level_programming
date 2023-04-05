#include "main.h"

/**
 * is_prime_number - it is a function that checks
 *		if an integer is a prime number or not
 *
 * @n: input integer
 * @i: integer
 *
 * Return: returns 1 if the input integer is a prime number
 *	otherwise return 0
*/
int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check numbers that less than n
 *		if they can divide it
 *
 * @n: input integer
 * @i: integer
 *
 * Return: the result
*/
int check_prime(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
