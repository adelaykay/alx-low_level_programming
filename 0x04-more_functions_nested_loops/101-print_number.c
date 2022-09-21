#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i, s, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}
	s = i;
	count = 1;
	while (s > 9)
	{
		s /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
}
