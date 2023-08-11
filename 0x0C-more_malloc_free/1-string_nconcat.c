#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings with a limit on the second string
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t total_len = len1 + (n < len2 ? n : len2) + 1;

	char *result = (char *)malloc(total_len);

	if (!result)

		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}

int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "World!";
	char *concatenated = string_nconcat(s1, s2, 5);

	if (concatenated)
	{
		printf("Concatenated string: %s\n", concatenated);
		free(concatenated);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}

