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
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((*ptr >= 97) && (*ptr <= 122))
	{
		*ptr -= 32;
	}

	while (*(ptr + i) != '\0')
	{
		j = 0;

		while (j < 13)
		{
			if ((*(ptr + i) >= 97) && (*(ptr + i) <= 122))
			{
				if (*(ptr + (i - 1)) == sep[j])
				{
					*(ptr + i) -= 32;
					break;
				}
			}
			j++;
		}
		i++;
	}
	return (ptr);
}
