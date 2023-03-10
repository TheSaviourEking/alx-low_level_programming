#include "main.h"

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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	exit(EXIT_SUCCESS);
}
