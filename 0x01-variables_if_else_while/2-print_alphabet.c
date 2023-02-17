#include <stdio.h>
/**
 * main - prints alphabet in lowercase followed
 * by new line
 * Return: Always (0) Success
 **/
int main(void)
{
	int i = 0;
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10); /* This is the ascii for new line */

	return (0);
}
