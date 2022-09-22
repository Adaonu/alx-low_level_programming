#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: the pointer
 */

char *_strcat(char *dest, char *src)
{
	int i1 = 0, i2 = 0;

	while (*(dest + 11) != '\0')
	{
		i1++;
	}

	while (i2 >= 0)
	{
		*(dest + i1) = *(src + i2);
		if (*(src + i2) == '\0')
		{
			break;
		}
		i1++;
		i2++;
	}
	return (dest);
}
