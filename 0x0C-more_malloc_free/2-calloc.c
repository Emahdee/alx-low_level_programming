#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates mem for an array, using malloc
 *
 * @nmemb: int
 * @size: int
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;

	return ((void *)mem);
}
