#include <stdlib.h>
#include <string.h>

/**
 * rot13 - Encodes a string using ROT13 encryption.
 * @input: The input string to be encoded.
 *
 * Return: A pointer to the dynamically allocated encoded string.
 *         If the input string is NULL or memory fails, it returns NULL.
 */
char *rot13(char *input)
{
	if (input == NULL)
		return (NULL);

	char *encoded = (char *)malloc(strlen(input) + 1);

	if (encoded == NULL)

		return (NULL);

	int i = 0;
	int len = strlen(input);

	while (i < len)
	{
		char ch = input[i];

		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{

			if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'm'))
				encoded[i] = ch + 13;
			else
				encoded[i] = ch - 13;
		}
		else
		{
			encoded[i] = ch;
		}

		i++;
	}

	encoded[i] = '\0';
	return (encoded);
}

