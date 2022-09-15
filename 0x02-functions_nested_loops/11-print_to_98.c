#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer input to begin numbering from
 *
 * Return: Always 0 (SUCCESS)
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d", n);
			n--;
		}
		else if (n < 98)
		{
			printf("%d", n);
			n++;
		}
		printf(", ");
	}
	printf("%d\n", n);
}
