#include "main.h"

/**
 * times_table  - generates a 9x multiplication table
 *
 * Return: no return   Always (SUCCESS)
 */

void times_table(void)
{
	int i;
	int j;
	int res;
	int first;
	int last;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			first = res / 10;
			last = res % 10;
			if (first > 0)
			{
				_putchar(first);
			}
			_putchar(last);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
