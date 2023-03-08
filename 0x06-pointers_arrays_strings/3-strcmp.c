#include "main.h"

/**
 * _strcmp -> compares two strings
 * @s1: First string to be compared
 * @s2: second string to be compared
 *
 * Return: negative if s2 > s1, positive if s1 > s2 , else 0;
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}

	return (int)*s1 - (int)*s2;
}
