#include "main.h"

/**
 * _abs -> computes the absolute value of a number
 * @n: the number whose absolute value is being computed
 *
 * Return: Always (0) Success
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}

}
