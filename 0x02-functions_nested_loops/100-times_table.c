#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0
 * @n: integer input
 */

void print_times_table(int n)
{
	if (n <= 15 || n >= 0)
	{
		int i;
		int j;
		int res;
		int first;
		int last;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				first = res / 10;
				last = res % 10;
				if (first > 0)
				{
					_putchar(first);
				}
				_putchar(last);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
