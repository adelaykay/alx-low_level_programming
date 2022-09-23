#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: an integer less tha, equal to or qreater than zero if
 * s1 is, respectively, less than, same as, or greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	for (i = 0; ; i++)
	{
		if (!*(s1 + i) && !*(s2 + i))
			break;
		if (*(s1 + i))
			diff += *(s1 + i);
		if (*(s2 + i))
			diff -+ *(s2 + i);
	}
	return (diff);
}
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
} 
