#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: an array of integers
 * @n: number of elements to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
			{
				printf("%d, ", a[i]);
			}
			else if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
