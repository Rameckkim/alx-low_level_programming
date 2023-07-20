#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Return: return 0 if successful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
