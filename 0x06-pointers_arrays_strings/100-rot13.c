#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 encryption.
 * @input: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *input)
{
	char rot13_map[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char *ptr = input;

	char *original = input;

	while (*ptr)
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			char offset = (*ptr >= 'a') ? 'a' : 'A';
			*ptr = rot13_map[*ptr - offset];
		}
		ptr++;
	}

	ptr = original;

	while (*ptr)
	{
		putchar(*ptr);
		ptr++;
	}

	return (original);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Hello, World!";
	printf("Original: ");
	rot13(str);
	putchar('\n');
	return (0);
}

