#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to base memory location to be filled
 * @b: constant byte to fill memory with
 * @n: number of bytes of memory area to fill
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
