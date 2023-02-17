#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 followed
 * by new line
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n');

	return (0);
}
