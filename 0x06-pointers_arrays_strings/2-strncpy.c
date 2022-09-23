#include "main.h"

/**
 * _strncpy - copies n bytes of the string pointed to by src to
 * the buffer pointed to by dest
 * @dest: resulting string
 * @src: source string
 * @n: number of bytes of src to be copied
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
