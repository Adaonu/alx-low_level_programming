#include "main.h"
/**
 * print_alphabet - function to print abc
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
