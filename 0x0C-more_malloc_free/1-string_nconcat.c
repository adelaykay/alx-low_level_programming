#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
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
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to use
 *
 * Return: pointer to newly allocated space in memory
 * containing s1, followed by the first n bytes of s2
 * OR NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len_s1, len_str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len_s1 = _strlen(s1);
	len_str = len_s1 + n;

	str = malloc(len_str * sizeof(str) + 1);
	if (str == NULL)
		return (NULL);

	for ( ; i < len_s1; i++)
	{
		str[i] = s1[i];
	}
	for (; n || !s2; n--, i++, j++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
