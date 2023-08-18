#include <stdarg.h>

/**
 * _putchar - A function to put a character to the standard output.
 * @c: The character to be printed.
 *
 * Return: On success, the character is returned. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * sum_them_all - Sums up a variable number of integers.
 * @n: The number of integers to sum.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

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
 * _numlen - Calculates the number of digits in an integer.
 * @num: The integer to calculate the length for.
 *
 * Return: The number of digits in the integer.
 */
int _numlen(int num)
{
	int len = 0;

	if (num == 0)
	{
		return (1);
	}
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/**
 * _print_num - Prints an integer to the standard output.
 * @num: The integer to be printed.
 */
void _print_num(int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	int len = _numlen(num);

	char buffer[10];  /* Max int digits (assuming 32-bit) */

	for (int i = len - 1; i >= 0; i--)

	{
		buffer[i] = (num % 10) + '0';

		num /= 10;
	}
	for (int i = 0; i < len; i++)
	{
		_putchar(buffer[i]);
	}
}

/**
 * main - The main function.
 *
 * Return: Always 0.
 */
int main(void)
{
	int result1 = sum_them_all(3, 10, 20, 30);
	int result2 = sum_them_all(4, 5, 10, 15, 20);
	int result3 = sum_them_all(0);

	_putchar('S');
	_putchar('u');
	_putchar('m');
	_putchar(':');
	_putchar(' ');
	_print_num(result1);
	_putchar('\n');

	_putchar('S');
	_putchar('u');
	_putchar('m');
	_putchar(':');
	_putchar(' ');
	_print_num(result2);
	_putchar('\n');

	_putchar('S');
	_putchar('u');
	_putchar('m');
	_putchar(':');
	_putchar(' ');
	_print_num(result3);
	_putchar('\n');

	return (0);
}

