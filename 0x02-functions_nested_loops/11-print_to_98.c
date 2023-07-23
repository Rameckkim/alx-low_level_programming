#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 * @n: where to start
 * Return: always 0
 */

void print_to_98(int n)
{
	int count;

	if (n == 98)
	{
		printf("%d", 98);
		putchar('\n');
	}
	else if (n > 98)
	{
		for (count = n; count >= 98; count--)
		{
			printf("%d", count);
			if (count != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else
	{
		for (count = n; count <= 98; count++)
		{
			printf("%d", count);
			if (count != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
