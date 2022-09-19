#include "main.h"

/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @s: The string to be printed.
*
* Return: i (the length of the string)
*/

void print_rev(char *s)
{
	int strlen = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
		strlen++;

	for (n = (strlen - 1); n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
