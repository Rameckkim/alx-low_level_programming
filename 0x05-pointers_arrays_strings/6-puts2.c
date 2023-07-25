#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: pointer to the string
 * Return: void
 */

void puts2(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		len += 2;
		str += 2;
	}
	_putchar('\n');
}
