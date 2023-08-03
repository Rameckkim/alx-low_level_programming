/**
 * _strlen - Helper function to calculate the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	/* Base case: If the current character is null (end of string), return 0. */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recursive case: Call the function with the next character in the string */
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - Helper function.
 * @s: The input string.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: If start is greater than or equal to end, it's a palindrome. */
	if (start >= end)
	{
		return (1);
	}

	/* If characters at start and end indices are not equal, not a palindrome. */
	if (s[start] != s[end])
	{
		return (0);
	}

	/* Check the next pair of characters towards the center of the string. */
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	/* An empty string or a single character is always a palindrome. */
	if (len <= 1)
	{
		return (1);
	}

	/* Call the helper function with the start and end indices. */
	return (is_palindrome_recursive(s, 0, len - 10));
}

