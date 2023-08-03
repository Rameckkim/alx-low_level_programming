/**
 * is_divisible - Helper function to check if a number is divisible by 'divisor'.
 * @n: The number to be checked for divisibility.
 * @divisor: The divisor to check for divisibility.
 *
 * Return: 1 if divisible, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	/* Base case: If divisor is greater than sqrt(n), n is prime (not divisible). */
	if (divisor * divisor > n)
	{
		return 0;
	}

	/* If n is divisible by the current divisor, return 1 (not prime). */
	if (n % divisor == 0)
	{
		return 1;
	}

	/* Check for divisibility with the next divisor. */
	return is_divisible(n, divisor + 1);
}

/**
 * is_prime_number - Checks if an input integer is a prime number.
 * @n: The input integer to be checked.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Base case: 0 and 1 are not prime numbers. */
	if (n <= 1)
	{
		return 0;
	}

	/* Check for divisibility starting from 2. */
	return !is_divisible(n, 2);
}

