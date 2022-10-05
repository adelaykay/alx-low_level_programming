#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string in question
 *
 * Return: NULL if str == NULL or memory allocation fails
 * OR pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 1;

	if (str == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	dup = (char *) malloc(len * (sizeof(char)));
	if (dup == NULL)
			return (NULL);
	while (*(str + i))
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
