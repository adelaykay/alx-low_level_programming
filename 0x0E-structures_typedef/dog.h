#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - yeah, a dog struct
 * @name: first member dog name of type pointer to char
 * @age: second member dog age of type float
 * @owner: third member dog owner of type pointer to char
 *
 * Description: I'm guessing this is a dog archive
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
