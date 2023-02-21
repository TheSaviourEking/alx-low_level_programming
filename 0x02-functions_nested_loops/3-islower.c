#include "main.h"

/**
 * _islower -> Checks for lowercase character
 *@c: The Character to be checked
 *
 * Return: (0) or -1 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
