#include <stdio.h>

/**
 * main - it is a program that prints its name
 *	followed by a new line
 *
 * @argc: int
 * @argv: array of arguments
 *
 * Return: Always 0
*/
int main(int argc, char const *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
