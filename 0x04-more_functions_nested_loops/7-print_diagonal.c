#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: size of the diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j < i)
				_putchar(' ');
			if (j == i)
				_putchar('\\');
		}
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
