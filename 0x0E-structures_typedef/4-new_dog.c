#include "dog.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to measure
 *
 * Return: length of string in question
 */

int _strlen(char *s)
{
	if (*s)
	{
		return (1 + _strlen(s + 1));
	}
	else
		return (0);
}

/**
 * _strcpy - copies the string pointed to by src, including '\0'
 * to the buffer pointed to by dest
 * @dest: resulting string
 * @src: source string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; ; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
	}
}
/**
 * new_dog - creates a new dog
 * @name: first member
 * @age: second
 * @owner: third
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc((1 + _strlen(name)) * sizeof(char));
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc((1 + _strlen(owner)) * sizeof(char));
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	_strcpy(new->name, name);
	new->age = age;
	_strcpy(new->owner, owner);
	return (new);
}
