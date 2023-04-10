#include <stdio.h>
#include <stdlib.h>

/**
 * main - it is a program that multiplies two numbers
 *
 * @argc: it is number of arguments
 * @argv: it is array of arguments
 *
 * Return: Always 0 if success, otherwise return 1
*/
int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
