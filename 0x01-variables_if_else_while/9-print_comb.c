#include <stdio.h>
/**
 * main - entry point
 * prinit all possible combinations of singl-digit numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int num;

	for (num = 0; num <=9; num++)
	{
		putchar((num % 10) + '0');
	}
	if (num == 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
