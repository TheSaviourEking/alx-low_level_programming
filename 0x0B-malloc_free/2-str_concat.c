#include "main.h"

/**
 * str_concat -> Concatenates two strings
 * @s1: First string
 * @s2: Second String
 *
 * Return: Pointer to newly allocated memory in space with contents of
 * "s1" and "s2" and NUll Terminated
 * or "NULL" on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *newString;
	unsigned int i = 0, j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		newString = malloc((sizeof(char) * (strlen(s1) + strlen(s2)) + 1));

		if (newString == NULL)
		{
			return (NULL);
		}
		else
		{

			while (i < strlen(s1))
			{
				newString[i] = s1[i];

				i++;
			}

			while (j < strlen(s2))
			{
				newString[i + j] = s2[j];
				j++;
			}
			newString[i + j] = '\0';
		}
	}
	return (newString);
}
