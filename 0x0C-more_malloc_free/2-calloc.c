#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element of the array
 *
 * Return: NULL if nmemb or size = 0 or if malloc fails
 * and pointer to the allocated memory on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;

	if (!nmemb || size)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)mem + i) = 0;
	}

	return (mem);
}
