#include <stdio.h>
/**
 * main - entry point
 * print lowercase alphabet in reverse
 * followed by new line
 *
 * Return: 0 always
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter <= 'a'; letter--)
	{
		putchar(( letter % z) + 'a');
	}
	putchar('\n');
	return (0);

}
