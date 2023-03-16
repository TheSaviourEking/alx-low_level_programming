#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -> multiplies two numbers
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: 1 if no argument, and 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]));
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	exit(EXIT_SUCCESS);
}
