#include <stdio.h>

/**
 * main - it is a program that prints all arguments it receives
 *
 * @argc: it is number of command line arguments
 * @argv: it is array of command line arguments
 *
 * Return: Always 0 if Success, otherwise return 1
*/
int main(int argc, char const *argv[])
{
	int t = 0;

	while (argc--)
	{
		printf("%s\n", argv[t]);
		t++;
	}
	return (0);
}
