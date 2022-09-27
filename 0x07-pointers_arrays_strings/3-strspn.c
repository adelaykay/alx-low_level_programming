#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked for bytes from accept
 * @accept: accepted characters
 *
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		}
		if (count == i)
			break;
	}
	return (count);
}
