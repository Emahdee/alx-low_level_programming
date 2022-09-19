#include "main.h"

/**
* puts_half - function that prints half of a string, followed by a new line.
* @str: The string to be printed.
*
* Return:
*/

void puts_half(char *str)
{
	int i, j;
	int strlen = 0;

	for (i = 0; str[i] != '\0'; i++)
		strlen++;

	j = strlen / 2;

	if ((strlen % 2) == 0)
		j = ((strlen - 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
