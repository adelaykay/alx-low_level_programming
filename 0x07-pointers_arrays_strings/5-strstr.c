#include "main.h"

/**
 * _strstr - locates the first occurrence of a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of located substring or
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j;

	for ( ; *haystack != '\0'; haystack++)
	{
		for (j = 0; ; j++)
		{
			if (*(needle + j) == '\0')
				return (haystack);
			else if (*(haystack + j) == *(needle + j))
				continue;
			else
				break;
		}
	}
	return ('\0');
}
