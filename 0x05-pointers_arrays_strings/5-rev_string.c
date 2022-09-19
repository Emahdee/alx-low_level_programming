#include "main.h"

/**
* rev_string - function that reverses a string.
* @s: The string to be printed.
*
* Return: i (the length of the string)
*/

void rev_string(char *s)
{
	int strlen = 0;
	int c, i;
    char *begin, *end, temp;
    begin = s;
    end = s;

	for (i = 0; s[i] != '\0'; i++)
		strlen++;

	for (c = 0; c < (strlen - 1); c++)
        end++;

    for (c = 0; c < (strlen/2); c++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;

        begin++;
        end--;
    }
}
