#include "main.h"

/**
* swap_int - function that swaps the values of two integers.
* @a: The integer to be swapped.
* @b: The integer to be swapped.
*
* Return:
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
