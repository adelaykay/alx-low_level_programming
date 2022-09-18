#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times '\' should be printed
 *
 * Return: 0 Always
 */

void print_diagonal(int n)
{
	int i;
	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			_putchar('\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
