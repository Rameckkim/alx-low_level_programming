#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s consisting only of
 *         bytes from accept.
 */
size_t _strspn(char *s, char *accept)
{
	size_t len = 0;
	int found;
	char *original_accept = accept;

	while (*s != '\0')
	{
		found = 0;

		/* Check if the current character of s is in accept */
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}

		/* If character is not in accept, return the current length */
		if (!found)
			return (len);

		len++;
		s++;
		accept = original_accept; /* Reset accept to the beginning */
	}

	return (len);
}

