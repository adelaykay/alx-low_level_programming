#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest number in the range
 * @max: highest number in the range
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr, i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
