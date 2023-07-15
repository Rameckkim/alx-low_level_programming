#include <stdio.h>

/**
 * main - stsrting of the code
 *
 *Return: returns 0
 */ 

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND-MAX / 2;
	IF (n > 0) 
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
