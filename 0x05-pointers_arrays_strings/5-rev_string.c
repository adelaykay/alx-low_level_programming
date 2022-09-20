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
			char temp[i + 1];

			for (j = i; j > 0; j--)
			{
				temp[counter] = s[j - 1];
				counter++;
			}
			s = temp;
			break;
		}
	}
}
