#include "main.h"

/**
* print_line -  draws a straight line in the terminal.
* @n: number to be checked
*
* Return:
*/

void print_line(int n)
{
	if (n > 0)
	{
		int a = 1;

		while (n >= a)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	} else
		_putchar('\n');
}
