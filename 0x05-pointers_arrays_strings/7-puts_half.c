#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be evaluated
 * Return: void
 */

void puts_half(char *str)
{
	int len, i, mid;
	char *p = str;

	len = 0;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	mid = len / 2;
	for (i = mid; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
