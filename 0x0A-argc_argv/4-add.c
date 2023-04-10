#include <stdio.h>
#include <stdlib.h>

/**
 * main - it is a program that adds positive numbers
 *
 * @argc: it is number of command line arguments
 * @argv: it is array of command line arguments
 *
 * Return: Always 0 if success
*/
int main(int argc, char *argv[])
{
	int r = 0;
	char *t;

	while (--argc)
	{
		for (t = argv[argc]; *t; t++)
			if (*t < '0' || *t > '9')
				return (printf("Error\n"), 1);
		r += atoi(argv[argc]);
	}
	printf("%d\n", r);
	return (0);
}
