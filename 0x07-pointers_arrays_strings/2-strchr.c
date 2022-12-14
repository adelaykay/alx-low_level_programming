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
	int i;

	for (i = 0; *(s + i) >= '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	return ('\0');
}
