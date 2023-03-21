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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Malloc the area and zero it out */
	else
	{
		if (p == NULL)
			return (NULL);
		p = malloc(nmemb * size);
		bzero(p, nmemb * size);
		return (p);
	}
}
