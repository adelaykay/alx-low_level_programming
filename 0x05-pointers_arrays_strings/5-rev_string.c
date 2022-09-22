#include "main.h"


/**
 * string_length - returns the length of a string
 * @ptr: string in question
 *
 * Return: length of string
 */
int string_length(char *ptr)
{
	int c = 0;

	while (*(ptr + c) != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length, c;
	char *first, *last, temp;

	length = string_length(s);
	first = s;
	last = s;

	for (c = 0; c < length - 1; c++)
	{
		last++;
	}
	for (c = 0; c < length / 2; c++)
	{
		temp = *last;
		*last = *first;
		*first = temp;

		first++;
		last--;
	}
}
