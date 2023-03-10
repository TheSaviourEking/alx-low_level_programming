#include <stdio.h>
#include <stdlib.h>

/**
 * main -> Prints number of args passed into it
 * @argc: Argument Count
 * @argv: Array of all argumemts
 *
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
	}

	exit(EXIT_SUCCESS);
}
