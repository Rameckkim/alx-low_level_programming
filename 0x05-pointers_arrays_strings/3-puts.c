#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: pointer to the string
 * Return: should be void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
