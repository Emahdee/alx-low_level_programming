#include <stdio.h>

/**
 * main - Print all different combination of three digits
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				if (a != b && a != c && b != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
				}
				if (a < 8)
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
