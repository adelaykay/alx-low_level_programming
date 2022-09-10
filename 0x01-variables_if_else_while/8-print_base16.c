#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 48;
	int a;

	for (a = 0; ; a++)
	{
		putchar(number++);
		if (number == 58)
		{
			number = 97;
		}
		else if (number == 103)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
