#include "main.h"
/**
 * main - entry point
 * print _putchar, followed by a new line
 *
 * Return: 0 always
 */
int main(void)
{
	int a = _putchar;
	while (a)
	{
		_putchar (a);
		a++;
	}
	_putchar('\n');
	return (0);
}

