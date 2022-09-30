#include <stdio.h>
/**
 * main - entry point
 * @argc: number of command line
 * @argv: array that contains the command line in argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
