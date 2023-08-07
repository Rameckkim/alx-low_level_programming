#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to concatenated string, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	size_t len_s1 = 0, len_s2 = 0;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	/* Allocate memory for concatenated string */
	concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	/* Check memory allocation */
	if (concatenated == NULL)
		return (NULL);

	/* Copy first string to concatenated */
	strcpy(concatenated, s1);

	/* Concatenate second string to concatenated */
	strcat(concatenated, s2);

	return (concatenated);
}

