#include "main.h"

/**
 * _isalpha - examines if a character is an alphabet
 * @c : character to be evaluated
 * Return: 1 if lower and 0 if non lower
 */

int _isalpha(int c)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (c == s)
		return (1);
	}

	for (s = 'A'; s <= 'Z'; s++)
	{
		if (c == s)
		return (1);
	}

	return (0);
}
