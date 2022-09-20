#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length, c;
	char *first, *last, temp;

	for (length = 0; ; length++)
	{
		if (s[length] == '\0')
		{
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
	}
}
