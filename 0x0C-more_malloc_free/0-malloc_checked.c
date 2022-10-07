#include "main.h"

#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: amout of bytes
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *o;

	o = malloc(b);

	if (o == NULL)
		exit(98);
	return (o);
}
