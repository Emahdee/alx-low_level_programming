#include <stdio.h>
#include <math.h>
/**
* main - prints the largest prime factor of the number
* 612852475143 , followed by a new line.
*
* Return: 0
*/

int main(void)
{
	long a = 612852475143, b, max;

	while (a % 2 == 0)
	{
		max = 2;
		a = a / 2; /* reduce a by dividing by 2 */
	}

	for (b = 3; b <= sqrt(612852475143); b += 2)
	{
		while (a % b == 0)
		{
			max = b;
			a = a / b;
		}
	}
	printf("%ld\n", max);
	return (0);
}
