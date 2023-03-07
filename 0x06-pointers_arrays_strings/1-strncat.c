#include "main.h"
#include <string.h>

/**
 * _strncat -> concatenates two strings
 * @dest: the string being added to
 * @src: the text being concatenated
 * @n: number of bytes being used by src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
