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
		putchar(letter);
	}
	putchar('\n');
	return (0);

}
