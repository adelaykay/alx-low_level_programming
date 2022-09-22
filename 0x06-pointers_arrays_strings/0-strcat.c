#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: main string which receives the other string's content
 * @src: other string
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; ; i++)
	{
		if (dest[i] == '\0')
		{
			int j = 0;

			while (src[j] != '\0')
			{
				dest[i++] = src[j++];
			}
			break;
		}
	}
	return (dest);
}
