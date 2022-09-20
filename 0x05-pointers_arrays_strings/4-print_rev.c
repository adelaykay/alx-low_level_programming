#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, len, j;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			len = i;
			break;
	}
	for (j = len; j > 0; j--)
	{
		_putchar(s[j - 1];
	}
	_putchar('\n');
}
