#include "main.h"

/**
 * jack_bauer - print 24 hrs of the day
 *
 * Return: zero
 */

void jack_bauer(void)
{
	char h1, h2, m1, m2;

	for (h1 = '0'; h1 <= '2'; h1++)
	{

		for (h2 = '0'; h2 <= '3'; h2++)
		{
			for (m1 = '0'; m1 < '6'; m1++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
}
