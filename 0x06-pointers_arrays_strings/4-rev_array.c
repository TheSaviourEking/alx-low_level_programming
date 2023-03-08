#include "main.h"

/**
 * reverse_array -> reverses the content of an array
 * @a: the array
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp = 0, j = 0;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = *(a + i);
		// *(a + i) = arr[i];
		// arr[j] = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
