#include <stdio.h>

/**
 * main - Prints all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
