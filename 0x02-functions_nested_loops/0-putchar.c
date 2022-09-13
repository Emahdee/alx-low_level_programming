#include "main.h"

/**
* main - Entry point
*
* Return: 0
*/

int main(void)
{
	char str[8] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
	return (0);
}
