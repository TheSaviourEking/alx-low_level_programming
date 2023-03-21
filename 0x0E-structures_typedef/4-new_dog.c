#include "main.h"

/**
 * new_dog -> Creates a new dog
 * @name: Name of new dog
 * @age: Age of Dog
 * @owner: Dog's Owner
 *
 * Return: new dog struct or "NULL" if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *newName = NULL, *newOwner;
	int len_name = 0, len_owner = 0, i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		len_name++;
	for (i = 0; owner[i] != '\0'; i++)
		len_owner++;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newName = malloc((len_name + 1) * sizeof(char));
	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newOwner = malloc((len_owner + 1) * sizeof(char));
	if (newOwner == NULL)
	{
		free(newDog);
		free(newName);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		newName[i] = name[i];
	newName[i] = '\0';
	for (i = 0; i < len_owner; i++)
		newOwner[i] = owner[i];
	newOwner[i] = '\0';
	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;
	return (newDog);
}
