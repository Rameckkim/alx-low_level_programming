#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int n = 0;
	int sign = 1;
	int valid = 0;

	while (s[c])
	{
		if (s[c] == '-')
		{
			sign *= -1;
		}

		while (s[c] >= '0' && s[c] <= '9')
		{
			valid = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}

		if (valid == 1)
		{
			break;
		}

		c++;
	}

	n *= sign;
	return (n);
}
