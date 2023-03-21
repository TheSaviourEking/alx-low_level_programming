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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/* POSIBLE FILL */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
