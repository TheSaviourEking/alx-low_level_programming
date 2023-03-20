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
	char *newString;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	newString = malloc(sizeof(char) * strlen(str + 1));

	if (newString == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		newString[i] = str[i];
		i++;
	}

	return (newString);
}
