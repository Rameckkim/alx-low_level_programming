#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 and also prints fizz and buzz
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 15) != 0))
			printf("Fizz");
		else if (((i % 5) == 0) && ((i % 15) != 0))
			printf("Buzz");
		else if ((i % (3 * 5)) == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
