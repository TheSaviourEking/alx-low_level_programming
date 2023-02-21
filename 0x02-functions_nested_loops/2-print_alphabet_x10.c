#include "main.h"

/**
 * print_alphabet_x10 -> prints 10 times the alphabet
 * followed by a new line
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int x = 0;

	while (i < 10)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}
