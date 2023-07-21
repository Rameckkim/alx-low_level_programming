#include "main.h"

/**
 * print_line - prints a line using underscore
 * @n: the size of the line
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
