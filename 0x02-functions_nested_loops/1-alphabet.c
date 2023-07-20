#include "main.h"

/**
 * print_alphabet - prints all the alphabets for a to z
 *
 * Return: zero
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
