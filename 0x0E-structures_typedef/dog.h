#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - yeah, a dog struct
 * @name: first member dog name of type pointer to char
 * @age: second member dog age of type float
 * @owner: third member dog owner of type pointer to char
 *
 * Description: I'm guessing this is a dog archive
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* MAIN_H */
