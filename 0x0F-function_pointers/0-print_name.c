#include "function_pointers.h"

/**
 * print_name -> Prints a name
 * @name: Name to be printed
 * @f: Function Pointer to do the task
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
