/**
 * wildcmp_recursive - Helper function to compare two strings recursively.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: (1) if strings are identical, otherwise (0).
 */
int wildcmp_recursive(char *s1, char *s2)
{
	/* Base case: If both strings reach the end, they are identical. */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* If both strings have the same character or s2 has */
	if (*s1 == *s2 || *s2 == '*')
	{
		/* If s2 has '*', recursively try matching the next character or skip it. */
		if (*s2 == '*')
		{
			if (wildcmp_recursive(s1, s2 + 1) || wildcmp_recursive(s1 + 1, s2))
			{
				return (1);
			}
		}

		/* Move to the next characters in both strings. */
		return (wildcmp_recursive(s1 + 1, s2 + 1));
	}

	/* If the characters are different and s2 doesn't have */
	return (0);
}

/**
 * wildcmp - Compares two strings and returns 1.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: (1) if strings are identical, otherwise (0).
 */
int wildcmp(char *s1, char *s2)
{
	/* Call the helper function starting from the beginning of both strings. */
	return (wildcmp_recursive(s1, s2));
}

