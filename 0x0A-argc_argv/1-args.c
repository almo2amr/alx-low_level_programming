#include <stdio.h>

/**
 * main - it prints the number of arguments passed into it
 *
 * @argc: it is number of arguments
 * @argv: it is array of command line arguments
 *
 * Return: Always 0 if Success, otherwise return 1
*/
int main(int argc, char *argv[])
{
	(void) argv; /*unused argv*/

	printf("%d\n", argc - 1);
	return (0);
}
