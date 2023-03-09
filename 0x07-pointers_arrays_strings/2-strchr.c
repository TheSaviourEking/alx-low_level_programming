#include "main.h"
#include <stdio.h>

/**
 * _strchr -> Locates a character in a string
 * @s: The string
 * @c: required character
 *
 * Return: A pointer to the first occurence of character 'c' in string
 * or 'NULL' if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
