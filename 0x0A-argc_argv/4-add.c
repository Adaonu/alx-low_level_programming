#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - point
 * @argc: number of command line
 * @argv: array that contains the pogram command line argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = j; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
