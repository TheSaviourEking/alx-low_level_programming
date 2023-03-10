#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main -> Prints all arguments it receives
 * @argc: Argument Count
 * @argv: Argument values
 *
 * Return: (0) SUCCESS
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	exit(EXIT_SUCCESS);
}
