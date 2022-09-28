#include "main.h"

/**
 * _put_recursion - prints a string
 * @string: string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s = 0)
	{
		_putchar(*s);
		return _puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
