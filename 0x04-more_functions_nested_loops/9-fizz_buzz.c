#include <stdio.h>

/**
* main - prints the numbers 1 to 100, followed by a new line,
* but for multiples of 3 print fizz instead of the number and
* for the multiples of five print Buzz. For numbers which are
* multiples of both three and five print FizzBuzz.
*
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
			printf("FizzBuzz ");
		else if ((a % 5) == 0)
			printf("Buzz ");
		else if ((a % 3) == 0)
			printf("Fizz ");
		else
			printf("%d ", a);
	}
	putchar('\n');
}
