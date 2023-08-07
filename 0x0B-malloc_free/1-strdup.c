#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string.
 * @str: String to duplicate.
 *
 * Return: Pointer to duplicated string, NULL on failure.
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t len;

	/* Check if input is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate string length */
	len = strlen(str);

	/* Allocate memory for duplicate */
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	/* Check memory allocation */
	if (duplicate == NULL)
		return (NULL);

	/* Copy string to duplicate */
	strcpy(duplicate, str);

	return (duplicate);
}

