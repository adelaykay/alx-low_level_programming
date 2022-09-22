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

	for (i = 0; ; i++)
	{
		if (dest[i] == '\0')
		{
			int j = 0;

			while (src[j] != '\0' && j <= n)
			{
				dest[i++] = src[j++];
			}
			break;
		}
	}
	return (dest);
}
