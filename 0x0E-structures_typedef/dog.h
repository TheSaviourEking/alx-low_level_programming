#ifndef DOG_H
#define DOG_H
/**
 * struct dog -> A Dog's struct
 * @name: Dogs name
 * @age: Dog's Age
 * @owner: The dog's owner
 *
 * Description: This struct enumerates a dogs properties
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */
