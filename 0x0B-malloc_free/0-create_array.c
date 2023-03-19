#include "main.h"

/**
 * create_array -> Creates an array of chars, and initializes them with
 * a specific char
 * @size: Size of array
 * @c: value assigned to each element in the array
 *
 * Return: Null if size = 0, Null if it fails or returns pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i = 0;

	while (i++ < size)
	{
		array[i] = c;
	}

	return (array);
}
