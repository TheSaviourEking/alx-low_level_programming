#include "function_pointers.h"

/**
 * array_iterator -> Executes a function given to it as parameter
 * @array: An array parameter
 * @size: size of array
 * @action: Pointer to needed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
