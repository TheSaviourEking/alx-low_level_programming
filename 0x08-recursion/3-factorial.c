#include "main.h"

/**
 * factorial -> returns the factorial of a number
 * @n: the given number
 *
 * Return: Nothing
 */

int factorial(int n)
{
	int factor = 1;

	if (n < 0)
	{
		factor = -1;
	}
	else if (n <= 1)
	{
		factor = 1;
	}
	else
	{
		factor = n * factorial(n - 1);
	}

	return (factor);
}
