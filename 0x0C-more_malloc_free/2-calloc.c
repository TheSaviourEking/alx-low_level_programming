#include "main.h"

/**
 * _calloc -> Allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size(in bytes) of @nmemb elements
 *
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Malloc the area and zero it out */
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
