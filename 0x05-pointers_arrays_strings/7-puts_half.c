#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string in question
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, j, len;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
			break;
		}
	}
	if (len % 2 != 0)
	{
		for (j = (len + 1) / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
