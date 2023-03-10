#include "main.h"

/**
 * _memset -> fills memory with a constant byte
 * @s: The memory area
 * @b: The constant byte used in filling
 * @n: Number of bytes to fill
 *
 * Return: Pointer to 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
