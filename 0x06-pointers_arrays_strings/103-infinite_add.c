#include "main.h"
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
	int i, j;
	char hex[2];

	for (i = 0; i < size; i += 10)
	{
		/* Print the starting position of the line in hexadecimal */
		for (j = 7; j >= 0; j--)
			hex[j] = "0123456789abcdef"[i >> (4 * (7 - j)) & 0xf];
		for (j = 0; j < 8; j++)
			putchar(hex[j]);
		putchar(':');
		putchar(' ');

		/* Print hexadecimal content and corresponding characters */
		for (j = 0; j < 10; j++)
		{
			if (j + i < size)
			{
				hex[0] = "0123456789abcdef"[b[i + j] >> 4 & 0xf];
				hex[1] = "0123456789abcdef"[b[i + j] & 0xf];
				putchar(hex[0]);
				putchar(hex[1]);
			}
			else
				putchar(' '), putchar(' ');

			if (j % 2 != 0)
				putchar(' ');

			/* Print the character representation of the byte */
			if (j + i < size)
				putchar(isprint(b[i + j]) ? b[i + j] : '.');
		}
		putchar('\n');
	}

	if (size <= 0)
		putchar('\n');
}

