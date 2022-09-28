#include  "main.h"
/**
 *  _sqrt_recursion -  natural square root of a number.
 *  @n: interger
 *  Return: -1
 */


int _sqrt_recursion(int n)
{
	if  (n => 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	return (_sqrt_recursion(n, 2));
}
