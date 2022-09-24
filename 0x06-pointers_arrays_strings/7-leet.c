#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j = 0;
	int lt[] = {52, 51, 48, 55, 49};
	int lc[] = {97, 101, 111, 116, 108};
	int uc[] = {65, 69, 79, 84, 76};

	while (*(str + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + j) == lc[i] || *(str + j) == uc[i])
			{
				*(str + j) = lt[i];
				break;
			}
		}
		j++;
	}
	return (str);
}
