#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat -  function that concatenates two strings
 *
 * @s1: string
 * @s2: string
 * @n: integer
 *
 * Return: pointer to new space in memory or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *new;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
		i++;

	new = malloc(sizeof(char) * (i + n + 1));

	if (new == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		new[i] = s2[j];
		i++, j++;
	}
	new[i] = '\0';
	return (new);
}
