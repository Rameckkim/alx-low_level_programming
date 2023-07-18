#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Return: return 0 if successful
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
