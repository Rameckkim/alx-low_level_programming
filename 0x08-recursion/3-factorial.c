/**
 * factorial - Returns factorial of a number.
 * @n: The input number.
 *
 * Return: Factorial of n, or -1 for errors.
 */
int factorial(int n)
{
	/* Base case: Factorial of 0 is 1. */
	if (n == 0)
	{
		return (1);
	}

	/* Error case: Return -1 for negative numbers. */
	if (n < 0)
	{
		return (-1);
	}

	/* Recursive case: Calculate factorial of (n-1) and multiply it by n. */
	return (n * factorial(n - 1));
}

