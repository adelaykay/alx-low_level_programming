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

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (res >= 10)
				{
					int first = res / 10;
					int last = res % 10;

					_putchar(first);
					_putchar(last);
				}
				else
				{
					_putchar(res);
				}
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
