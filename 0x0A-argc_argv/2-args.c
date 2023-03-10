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

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
