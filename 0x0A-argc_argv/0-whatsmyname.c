#include <stdlib.h>
#include <stdio.h>

/**
 * main -> prints its name at runtime
 * @argc: Argument Count
 * @argv: argument vector -> array of pointer to the string
 *
 * Return: Always (0);
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	exit(EXIT_SUCCESS);
}
