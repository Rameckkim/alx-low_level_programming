#include "main.h"
#include <stddef.h>

/**
 * rot13 - Encodes a string using the ROT13 algorithm.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified input string.
 */
char *rot13(char *str)
{
	if (str == NULL)
		return (NULL);

	char *ptr = str;

	for (; *ptr != '\0'; ptr++)
	{
		char c = *ptr;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
				c += 13;
			else
				c -= 13;
		}

		*ptr = c;
	}

	return (str);
}

