#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line 
 * @n: perameter
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('-');
	}
	putchar('\n');
}
