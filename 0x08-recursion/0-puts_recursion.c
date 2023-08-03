#include <stdio.h>

/**
 * _puts_recursion - Prints a string with recursion.
 * @s: The input string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n'); /* Print newline */
		return;
	}

	putchar(*s); /* Print current character */
	_puts_recursion(s + 1);
}

/**
 * main - Entry point.
 * Return: 0 (success).
 */
int main(void)
{
	char str[] = "Hello, world!";
	_puts_recursion(str);
	return (0);
}

