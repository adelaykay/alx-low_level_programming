#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return nothing
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
		{
			int j, counter = 0;
			char temp[] = s;

			for (j = i; j > 0; j--)
			{
				s[counter] = temp[j - 1]
				counter++;
			}
		}
	}
}
