#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, length;

	length = _strlen(str);
	if (length % 2 == 1)
	{
		for (i = (length + 1) / 2; *(str + i) != '\0'; i++)
		{
			_putchar(*(str + i));
		}
	}
	else if (length % 2 == 0)
	{
		for (i = (length / 2); *(str + i) != '\0'; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
