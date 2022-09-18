#include "main.h"

/**
 * print_line - draws a horizontal line in the terminal
 * @n: number of times '_' should be printed
 *
 * Return: 0 Always
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
