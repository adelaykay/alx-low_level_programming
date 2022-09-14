#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer input
 *
 * Return: last digit Always (SUCCESS)
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
	_putchar('\n');
}
