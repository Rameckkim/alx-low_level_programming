/**
 * _sqrt_recursive - Helper function for calculating square root recursively.
 * @n: The number whose square root is to be calculated.
 * @guess: The current guessed value for the square root.
 *
 * Return: The natural square root of n, or -1 if not found.
 */
int _sqrt_recursive(int n, int guess)
{
	/* Calculate the square of the current guess. */
	int square = guess * guess;

	/* Base case: If square is equal to n, return guess as square root. */
	if (square == n)
	{
		return (guess);
	}

	/* If square is greater than n, the guess is too high. */
	if (square > n)
	{
		return (-1);
	}

	/* Continue searching for the square root by incrementing the guess. */
	return (_sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be calculated.
 *
 * Return: The natural square root of n, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	/* Return -1 for negative numbers as they don't have natural square roots. */
	if (n < 0)
	{
		return  (-1);
	}

	/* Call the helper function with the initial guess set to 0. */
	return (_sqrt_recursive(n, 0));
}

