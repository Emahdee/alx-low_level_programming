#include "main.h"

/**
* puts_half - function that prints half of a string, followed by a new line.
* @dest: The string to be printed.
* @src: The string to be printed.
*
* Return: char *
*/

char *_strcat(char *dest, char *src)
{

	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;

	for (j = 0; (dest[i + j] = *src++) != '\0';)
		j++;

	return (dest);
}
