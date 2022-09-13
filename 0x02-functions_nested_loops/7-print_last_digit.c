#include "main.h"

/**
* print_last_digit - prints the last digit of a number.
* @c: The number to be checked.
*
* Return: 0
*/

int print_last_digit(int c)
{
	int last = c % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
