#include "main.h"

/**
* times_table - prints the n times table, starting with 0.
*
* Return: 0
*/

void print_times_table(int n)
{
	int prod;

	if (n < 16)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * i;

				if (prod <= 9)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}