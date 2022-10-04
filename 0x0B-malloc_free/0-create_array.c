#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and intializes it with a specific char
 * @size: size of the array in bytes
 * @c: initializing character
 *
 * Return: pointer to the array on Success
 * NULL on failure or if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(size * (sizeof(char)));
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
