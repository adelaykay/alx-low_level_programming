#include "function_pointers.h"
/**
 * int_index- searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: function to be used to compare values
 * Return: index of the first element for which
 * the cmp function does not return 0,
 * if no match, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size > 0 && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	else if (size <= 0)
		return (-1);
	return (-1);
}
