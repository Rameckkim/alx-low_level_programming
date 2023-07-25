#include "main.h"

/**
 * _strlen - checks the length of the string
 * @s: string to be evaluated
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
