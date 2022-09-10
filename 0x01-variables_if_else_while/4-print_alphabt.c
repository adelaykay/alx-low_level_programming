#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number = 'a';
	int a;

	for (a = 0; a < 26; a++)
	{
		if (!(a == 4 || a == 16))
		{
			putchar(number);
		}
		number++;
	}
	putchar('\n');
	return (0);
}
