#include "main.h"

/**
 * array_range -> Creates array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Description: The array created should contain all the values from
 * " min" (included) to "max" (included), ordered from min to max
 *
 * Return: Pointer to newly created array, if "min > max" returns "NULL",
 * if malloc fails, return "NULL"
 */

int *array_range(int min, int max)
{
	int *new_array;
	int diff = 0, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	diff = max - min;

	new_array = malloc((diff + 1) * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= diff; i++)
	{
		new_array[i] = min++;
	}

	return (new_array);
}
