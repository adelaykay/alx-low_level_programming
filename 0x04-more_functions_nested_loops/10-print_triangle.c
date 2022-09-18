#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: 0 Always
 */

void print_triangle(int size)
{
	int i, j, k;
	int counter = 0;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < i - 1; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= counter; k++)
			{
				_putchar('#');
			}
			counter++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
