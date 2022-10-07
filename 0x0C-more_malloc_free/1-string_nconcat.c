#include "main.h"

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
	unsigned int i = 0, j = 0, len;
	char *ptr;

	if (s1)
	{
		while (*(s1 + i))
			i++;
	}
	if (s2)
	{
		while (*(s2 + j))
			j++;
	}
	len = n >= j ? (i + j + 1) : (i + n + 1);

	ptr = malloc(len);

	if (ptr != NULL)
	{
		for (i = 0; *(s1 + i); i++)
		{
			*(ptr + i) = *(s1 + i);
			printf("%d, %c ", i, *(ptr + i));
		}
		for ( ; i < len; i++)
		{
			ptr[i] = *s2;
			s2++;
			printf("%d, %c ", i, ptr[i]);
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
