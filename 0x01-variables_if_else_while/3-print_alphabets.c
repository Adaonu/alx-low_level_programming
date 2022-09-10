#include <stdio.h>
/**
 * main - entry point
 *
 * print alphabet in lowercase and uppercase
 *
 * Return 0  alwats (succes)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{ 
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
