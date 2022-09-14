#include "main.h"
/**
 * print_alphabet - fuction print 10 times the alphet
 * in lowercase, followed by a new line.
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char letter, i;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (i = 0; i <= 9; i++)
		{
		_putchar(letter);
		}
	
	}
	_putchar('\n');
}
