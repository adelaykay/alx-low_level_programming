#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory in bytes
 *
 * Return: 98 on failure or a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
		return (ptr);
	}
	return (ptr);
}
