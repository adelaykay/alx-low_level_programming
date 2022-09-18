#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times '\' should be printed
 *
 * Return: 0 Always
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}
