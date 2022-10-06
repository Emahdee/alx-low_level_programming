#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: int
 * @max: int
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int i, b;

	if (min > max)
		return (NULL);

	b = (max - min) + 1;

	a = malloc(b * sizeof(*a));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < b && min <= max; i++, min++)
		a[i] = min;

	return (a);
}
