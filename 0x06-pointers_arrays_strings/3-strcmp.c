#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: an integer less than, equal to or qreater than zero if
 * s1 is, respectively, less than, same as, or greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
