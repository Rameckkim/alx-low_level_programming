#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 * @...: The variable number of arguments.
 *
 * Return: The sum of all parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum = 0;
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int result1 = sum_them_all(4, 10, 20, 30, 40);
	int result2 = sum_them_all(0);

	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);

	return (0);
}

