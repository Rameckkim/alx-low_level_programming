#include "main.h"

/**
 * times_table - prints the times table
 *
 * Return: always zero
 */

void times_table(void)
{
	int i, a, j;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			j = a * i;
			if (j < 10)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j <= 9 && a != 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
