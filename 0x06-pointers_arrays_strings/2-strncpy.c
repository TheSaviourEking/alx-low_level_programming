#include "main.h"
#include <stddef.h>

/**
 * _strncpy -> copies a string
 * @dest: the string being copied to
 * @src: the string being copied
 * @n: max number to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL)
	{
		return NULL;
	}

	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		*src++;
		*dest++;
	}

	*dest = '\0';

	return ptr;
}
