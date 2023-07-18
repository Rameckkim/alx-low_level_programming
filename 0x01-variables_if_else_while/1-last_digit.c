#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if the suffix
 *
 * Return: returns 0
*/
int main(void)
{
	int m, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of ");
	if (m > 5)
		printf("%d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("%d is %d and is 0\n", n, m);
	else
		printf("%d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
