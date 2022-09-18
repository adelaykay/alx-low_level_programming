#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times '\' should be printed
 *
 * Return: 0 Always
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\');
			_putchar('\n');
			for (j = i; j < n - 1; j++)
			{
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
