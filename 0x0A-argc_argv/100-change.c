#include <stdio.h>
#include <stdlib.h>

/**
 * main - it is a program that prints the minimum number
 *	of coins to make change for an amount of money
 *
 * @argc: it is the number of arguments
 * @argv: it is array of arguments
 *
 * Return: 0 if success, otherwis 1
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int c, minimumcents = 0, amount = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (c = 0; c < 5; c++)
		{
			if (amount >= cents[c])
			{
				minimumcents += amount / cents[c];
				amount = amount % cents[c];
				if (amount % cents[c] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", minimumcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
