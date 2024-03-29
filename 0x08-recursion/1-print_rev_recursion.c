#include "main.h"

/**
 * _print_rev_recursion -> Prints a String in reverse
 * @s: The string being printed
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
