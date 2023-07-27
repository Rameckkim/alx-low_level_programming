/**
 * print_number - Prints an integer using _putchar function.
 * @n: The integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	/* Handle the case of negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n; /* Convert the number to positive */
	}

	/* Handle the case of single-digit or zero numbers */
	if (n >= 0 && n <= 9)
	{
		_putchar('0' + n);
	}
	else
	{
		/* Recursively print each digit in reverse order */
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}

