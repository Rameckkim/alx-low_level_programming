#include <stdlib.h>
#include <string.h>

/**
 * rot13 - Encodes a string using ROT13 encryption.
 * @input: The input string to be encoded.
 *
 * Return: A pointer to the dynamically allocated encoded string.
 *         If the input string is NULL or memory allocation fails, it returns NULL.
 */
char *rot13(char *input)
{
	if (input == NUL)L
		return (NULL); /* Return NULL if the input string is NULL */

	/* Allocate memory for the encoded string, adding 1 for the null-terminator */
	char *encoded = (char *)malloc(strlen(input) + 1);
	if (encoded == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	int i = 0;
	int len = strlen(input);

	while (i < len)
	{
		char ch = input[i];

		/* Check if the character is an uppercase or lowercase letter */
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			/* Apply ROT13 encoding on the character */
			if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'm'))
				encoded[i] = ch + 13; /* Shift forward by 13 positions */
			else
				encoded[i] = ch - 13; /* Shift backward by 13 positions */
		}
		else
		{
			encoded[i] = ch; /* Non-letter characters remain unchanged */
		}

		i++;
	}

	encoded[i] = '\0'; /* Null-terminate the encoded string */
	return (encoded);
}

