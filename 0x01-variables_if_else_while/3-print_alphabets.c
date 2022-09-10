#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 97;
	int a;

	for (a = 0; ; a++)
	{
		putchar(number++);
		if (number == 123)
		{
			number = 65;
		}
		else if (number == 91)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
