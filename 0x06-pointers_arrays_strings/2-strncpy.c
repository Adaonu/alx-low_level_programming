#include "main.h"

/**
 * _strncpy - Copies a string.
 * terminating null byte, using at most an inputted number of bytes.
 * If the length of the source string is less than the maximum byte number,
 * the remainder of the destination string is filled with null bytes.
 * Works identically to the standard library function `strncpy`.
 * @dest: Destination.
 * @src: Source.
 * @n: Amounts of bytes from source.
 * Return: the pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

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
