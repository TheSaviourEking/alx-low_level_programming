#include "main.h"

/**
 * print_last_digit -> Prints the last digit of a number
 *@n: the digit to be checked
 *
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	int r = 0;

	if (n < 0)
	{
		r = -1 * (n % 10);
	}
	else
	{
		r = n % 10;
	}

	_putchar((r % 10) + '0');

	return(r % 10);
}
