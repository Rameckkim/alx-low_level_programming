#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to match.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr_accept = accept;

		/* Check if the current character of s matches any of the bytes in accept */
		while (*ptr_accept != '\0')
		{
			if (*s == *ptr_accept)
				return (s); /* Return the pointer to the matching byte */
			ptr_accept++;
		}

		s++;
	}

	return (NULL); /* If no match found, return NULL */
}

