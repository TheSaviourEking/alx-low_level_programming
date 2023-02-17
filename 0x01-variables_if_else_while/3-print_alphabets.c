#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then uppercase
 * followed by uppercase
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
