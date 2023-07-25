#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	char *str = s;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str--;

	while (s < str)
	{
	char temp = *s;

	*s = *str;
	*str = temp;
	s++;
	str--;
	}
}
