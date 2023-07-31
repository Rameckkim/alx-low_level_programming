#include <stddef.h>

/**
 * _strstr - Locates a substring.
 *
 * @haystack: Pointer to the string where to search for the substring.
 * @needle: Pointer to the substring to be located.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay_ptr = haystack;
		char *nee_ptr = needle;

		/* Check if the current substring of haystack matches needle */
		while (*hay_ptr == *nee_ptr && *nee_ptr != '\0')
		{
			hay_ptr++;
			nee_ptr++;
		}

		/* If needle is found in haystack, return the starting address */
		if (*nee_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL); /* If substring is not found, return NULL */
}

