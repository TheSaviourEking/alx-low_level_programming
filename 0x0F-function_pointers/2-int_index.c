#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -> Functions that searches for an integer
 * @array: An array parameter
 * @size: Number of elements in array;
 * @cmp: Pointer to function to be usedi
 *
 * Return: First element for which the "cmp" function does not return 0
 * if no element matches, return (-1)
 * if "size <= 0", return -1;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
