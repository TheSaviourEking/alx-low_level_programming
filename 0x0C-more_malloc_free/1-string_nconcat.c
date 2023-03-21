#include "main.h"

/**
 * string_nconcat -> Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes of n2 to concatenate
 *
 * Return: pointer to a newly allocated space in memory which contains s1
 * followed by "n" bytes of "s2", and null terminated
 * or "NULL" if "UNSUCCESSFUL"
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new_string = malloc((sizeof(char) * (strlen(s1) + n)) + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		new_string[i] = s1[i];
	}

	for (j = 0; j < strlen(s2) - (strlen(s2) - n); j++)
	{
		new_string[i + j] = s2[j];
	}

	new_string[i + j] = '\0';

	return (new_string);
}
