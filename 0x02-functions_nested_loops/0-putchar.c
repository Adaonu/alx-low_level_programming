#include "main.h"
/**
 * main - entry point
 * print _putchar, followed by a new line
 *
 * Return: 0 always
 */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++
	}
	_putchar('\n');
	return (0);
}

