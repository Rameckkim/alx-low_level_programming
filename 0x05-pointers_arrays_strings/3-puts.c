#include "main.h"

/**
 *  _puts - prints a string
 *@str: string pointer
 *Return: always zero
 */



void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}

