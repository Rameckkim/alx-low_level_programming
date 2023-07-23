#include "main.h"

/**
 * _islower - examines if a character is lowercase
 * @c: character to be evaaluated
 * Return: 1 if lower and 0 if non lower
 */

int _islower(int c)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (c == s)
		return (1);
	}
	return (0);
}
