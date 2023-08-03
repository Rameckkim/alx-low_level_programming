/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y,
 *         or -1 if the exponent is negative.
 */
int _pow_recursion(int x, int y)
{
	/* Base case: If the exponent is 0, return 1 (x^0 = 1). */
	if (y == 0)
	{
		return (1);
	}

	/* Error case: If the exponent is negative, return -1. */
	if (y < 0)
	{
		return (-1);
	}

	/* Recursive case: Calculate x^(y-1) and multiply it by x. */
	return (x * _pow_recursion(x, y - 1));
}

