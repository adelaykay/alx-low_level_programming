#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{
		for (b = a; b < 58; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				if (!((a == 56) && (b == 57)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
