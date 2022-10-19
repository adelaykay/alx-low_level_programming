#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory block
 *
 * Return: bunch of stuff
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}

	newptr = malloc(new_size);

	if (!newptr)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		*((int *)newptr + i) = *((int *)ptr + i);
	}
	free(ptr);
	return (newptr);
}
