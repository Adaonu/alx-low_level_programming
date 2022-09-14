#include "main.h"
/**
 * print_sign - function that print the sign of a number
 * @n: is the int tha will use for the argument in the function
 *
 * Return: 0 always
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}

	else (n > 0)
	{
		_putchar('-');
		return (-1);
	}
}
