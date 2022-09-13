#include "main.h"
/**
 * main - entry point
 * print _putchar, followed by a new line
 *
 * Return: 0 always
 */
int main(void)
{
	int c;
	c = _putchar();

	while (c != _putchar)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

