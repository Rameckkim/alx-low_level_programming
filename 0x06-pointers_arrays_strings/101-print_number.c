#include "main.h"

int _putchar(char c);

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;
	int negative = 0;

	/* Handle the special case of 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Handle negative numbers */
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}

	/* Find the divisor to get the leftmost digit */
	while (n / divisor >= 10)
		divisor *= 10;

	/* Print the digits */
	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}

	/* Print the negative sign if necessary */
	if (negative)
		_putchar('-');
}

