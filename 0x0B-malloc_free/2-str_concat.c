#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: string in question
 *
 * Return: length of the string or 0 if string is null.
 */

unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (*(str + len))
		len++;
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string which contains the
 * contents of s1 followed by the contents of s2
 * OR NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, len_s3, i;
	char *s3;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	len_s3 = len_s1 + len_s2;

	s3 = (char *) malloc((len_s3 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		s3[i] = s1[i];
	}
	for ( ; i <= len_s3; i++)
	{
		s3[i] = *s2;
		s2++;
	}
	return (s3);
}
