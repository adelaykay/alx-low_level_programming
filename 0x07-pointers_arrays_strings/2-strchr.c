#include "main.h"

/**
 * _strchr - locates the first occurence of a character in a string
 * @s: string in question
 * @c: character in question
 *
 * Return: pointer to the character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	return (s);
}
