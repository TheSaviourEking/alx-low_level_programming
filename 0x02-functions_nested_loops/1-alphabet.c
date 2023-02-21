#include "main.h"
#include "_putchar.c"

/**
*print_alphabet - Prints the alphabet in lowercase followed by
*a new line
*
*Return: Nothing
*/

void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
