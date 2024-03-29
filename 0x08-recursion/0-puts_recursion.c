#include "main.h"

/**
 * _puts_recursion -> Prints a string followed by new line
 * @s: The string to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
