#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the ponter to the string being reversed
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;
	char *str = s;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = (len - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
