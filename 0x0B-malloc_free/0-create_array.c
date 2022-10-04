#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * @size: size of arrary
 * @c: stored char
 * Return: null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(c) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}

