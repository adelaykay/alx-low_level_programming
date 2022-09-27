#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
