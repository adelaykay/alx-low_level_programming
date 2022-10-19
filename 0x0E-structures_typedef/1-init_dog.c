#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the variable to be initialized
 * @name: first member of the struct
 * @age: second member
 * @owner: third
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
