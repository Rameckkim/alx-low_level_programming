#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	char digit;
	int divisor = 1;
	int is_negative = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	/* Calculate the divisor to extract digits */
	while (n / divisor != 0)
		divisor *= 10;

	/* Handle the negative sign */
	if (is_negative)
		write(1, "-", 1);

	/* Extract and print each digit */
	while (divisor > 1)
	{
		divisor /= 10;
		digit = (n / divisor) + '0';
		write(1, &digit, 1);
		n %= divisor;
	}
}

