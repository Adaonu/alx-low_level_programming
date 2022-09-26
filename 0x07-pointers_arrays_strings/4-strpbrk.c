#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string
 * @accept: second string
 * Return:  pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j, i;

	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
