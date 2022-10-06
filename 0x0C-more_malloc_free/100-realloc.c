#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 *
 * @ptr: void pointer
 * @old_size: allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *a;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	a = malloc(new_size * sizeof(char));

	if (a == NULL)
		return (NULL);

	i = 0;

	if (new_size > old_size)
	{
		while (i < old_size)
		{
			a[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (a);
	}

	/* if new_size < old_size */
	while (i < new_size)
	{
		a[i] = ((char *)ptr)[i];
		i++;
	}

	free(ptr);
	return (a);
}
