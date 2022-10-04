#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: input string
 * Return: a pointer to a new string which is a duplicate of the string str.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	s = (char *) malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
