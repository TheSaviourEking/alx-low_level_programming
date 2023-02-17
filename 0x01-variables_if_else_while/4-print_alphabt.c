#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by new line
 * except 'q' and 'e'
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		if (i == 113 || i == 101)
		{
			continue;
		}
	putchar(i);
	}

	putchar('\n');

	return (0);
}
