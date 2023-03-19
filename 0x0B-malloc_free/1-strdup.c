#include "main.h"

/**
 * _strdup -> Returns pointer to newly allocated space in memory, which
 * contains a copy of the string given as parameter
 * @str: The string given as parameter
 *
 * Return: Pointer to a new string or "NULL" if insufficient memory
 */

char *_strdup(char *str)
{
	char *newString = malloc(sizeof(char) * strlen(str + 1));
	unsigned int i = 0;

	if (newString == NULL || str == NULL)
	{
		return (NULL);
	}

	strcpy(newString, str);

	return (newString);
}
