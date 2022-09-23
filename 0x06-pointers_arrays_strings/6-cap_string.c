#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @ptr: string
 *
 * Return: capitalized string
 */

char *cap_string(char *ptr)
{
	int i = 1, j;
	char sep[] = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if ((*ptr >= 97) && (*ptr <= 122))
		*ptr -= 32;

	while (*(ptr + i) != '\0')
	{
		j = 0;

		while (sep[j] != '\0')
		{
			if (((*(ptr +  i) >= 97) && (*(ptr + i) <= 122)) && (*(ptr + i - 1) == sep[j]))
			{
				*(ptr + i) -= 32;
			}
			j++;
		}
		i++;
	}
	return (ptr);
}
