#include "main.h"

/**
 * _strlen_recursion -> Returns length of a string
 * @s: The string
 *
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(++s);
		n = n + 1;
	}
	return (n);
}
