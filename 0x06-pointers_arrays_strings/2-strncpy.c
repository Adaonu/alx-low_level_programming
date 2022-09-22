#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination.
 * @src: Source.
 * @n: Amounts of bytes from source.
 * Return: the pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int 1;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
