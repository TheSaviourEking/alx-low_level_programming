#include "main.h"

/**
 * free_dog -> Frees the heap storage occupied by "DOGS"
 * @d: struct dog
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
