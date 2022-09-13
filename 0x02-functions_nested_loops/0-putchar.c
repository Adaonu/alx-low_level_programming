#include "main.h"
/**
 * main - entry point
 * print _putchar, followed by a new line
 *
 * Return: 0 always
 */
int main(void)
{
	char *sh = _putchar;

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');
	return (0);
}

