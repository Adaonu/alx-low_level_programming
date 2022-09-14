#include "main.h"
/**
 * main - check the code
 * write a founction that prints the alphabet
 * in lowercase
 * followed by a new line.
 *
 * Return: 0 always
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

}
