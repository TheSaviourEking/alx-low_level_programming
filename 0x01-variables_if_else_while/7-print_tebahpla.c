#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 * followed by new line
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i = 0;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
