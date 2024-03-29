#include "main.h"

/**
 * malloc_checked -> Allocates memory using "malloc"
 * @b: size of memory needed
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	 ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

