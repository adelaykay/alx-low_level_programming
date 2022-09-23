#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: main string which receives the other string's content
 * @src: other string
 * @n: number of bytes from src to use
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lensrc = 0;

	while (dest[lensrc] != '\0')
		lensrc++;

	for (i = 0; ; i++)
	{
		if (dest[i] == '\0')
		{
			int j = 0;

			while (j < n)
			{
				dest[i++] = src[j++];
				if (src[j] == '\0')
					break;
			}
		}
	}
	return (dest);
}
