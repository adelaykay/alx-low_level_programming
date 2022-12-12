#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
