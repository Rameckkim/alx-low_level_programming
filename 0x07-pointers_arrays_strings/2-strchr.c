#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of character c in the string s.
 *
 * @s: Pointer to the string where to search for the character.
 * @c: The character to be located.
 *
 * Return: Pointer to the first occurrence of character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i); /* Found the character, return the pointer */
		}
	}

	/* If the loop reaches here, character c is not found in the string */
	return (NULL);
}

