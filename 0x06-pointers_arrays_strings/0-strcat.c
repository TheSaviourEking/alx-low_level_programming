#include "main.h"
#include <string.h>

/**
 * _strcat -> appends src to dest
 * @dest: string to be appended to
 * @src: string to be copied
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
