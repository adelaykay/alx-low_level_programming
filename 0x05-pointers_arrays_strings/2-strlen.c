#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	char str[] = *s;
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
	}
	return (i);
}
