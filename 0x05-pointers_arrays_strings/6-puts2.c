#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string in question
 *
 * Return nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (i % 2 != 0)
		{
			_putchar(str[i]);
		}
		if (str[i] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
