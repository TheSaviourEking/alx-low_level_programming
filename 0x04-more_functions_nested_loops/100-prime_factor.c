#include <stdio.h>
/**
 * main -> Prints the largest prime factor of a number
 * Return: Always (0) Success
 */
int main(void)
{
	unsigned int x = 2;
	unsigned long y = 612852475143;

	while (x != y)
	{
		if (y % x == 0)
		{
			y = y / x;
		} else
		{
			a++;
		}
	}
	printf("%lu\n", n);

	return (0);
}
