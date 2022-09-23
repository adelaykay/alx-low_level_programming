#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @ptr: string to capitalize
 *
 * Return: capitalized string
 */

char *string_toupper(char *ptr)
{
	int i = 0;

	while (*(ptr + i) != '\0')
	{
		if ((*(ptr +  i) >= 97) && (*(ptr + i) <= 122))
			*(ptr + i) -= 32;
		i++;
	}
	return (ptr);
}
