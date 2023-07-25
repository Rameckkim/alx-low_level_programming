#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: pointer to the string
 * Return: always zero
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')

	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
