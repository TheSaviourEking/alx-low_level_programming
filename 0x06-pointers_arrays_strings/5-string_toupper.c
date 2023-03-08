#include "main.h"

/**
 * string_toupper -> converts all lowercase letters to strings
 * @str: the string being converted
 *
 * Return: Pointer to the sorted string
 */

char *string_toupper(char *str)
{
	// char *ptr = str;
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
