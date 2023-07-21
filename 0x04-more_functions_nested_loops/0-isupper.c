#include "main.h"

/**
 * _isupper - looks for an upper case character
 * @c: character to be evaluated
 * Return: 1 if uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
