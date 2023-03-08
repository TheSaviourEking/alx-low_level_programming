#include "main.h"

/**
 * leet -> encodes a string into 1337 (leet)
 * @str: The sting being encoded
 *
 * Return: A pointer to the string
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char c[] = "AaEeOoTtLi", n[] = "4433007711";

	i = 0;

	while(*(str + i) != '\0')
	{
		j = 0;

		while (c[j] != '\0')
		{
			if (str[i] == c[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
