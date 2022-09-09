#include <stdio.h>

/**
 * main - Prints all possible different combination of two digits
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
			}
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
