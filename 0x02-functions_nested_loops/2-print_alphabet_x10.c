#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: 0
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char alp;

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}

		_putchar('\n');
	}
}
