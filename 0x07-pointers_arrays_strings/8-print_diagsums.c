#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: input
 * @size: input
 *
 * Return:
 */
void print_diagsums(int *a, int size)
{
	int i, j, tl1 = 0, tl2 = 0;

	for (i = 0; i <= (size * size); i += size + 1)
		tl1 += a[i];

	for (j = size - 1; j <= (size * size) - size; j += size - 1)
		tl2 += a[j];

	printf("%d, %d\n", tl1, tl2);
}
