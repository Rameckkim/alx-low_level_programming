#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n number to be evaluated
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i >= 0)
	{
		_putchar('0' + i);
		return (i);
	}
	else
	{
		_putchar('0' - i);
		return (-i);
	}
}
