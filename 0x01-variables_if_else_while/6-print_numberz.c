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

	for (a = 0; a < 10; a++)
	{
		putchar(number++);
	}
	putchar('\n');
	return (0);
}
