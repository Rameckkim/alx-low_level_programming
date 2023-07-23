#include "main.h"

/**
 * _abs- prints for an absolute number
 * @int: number to be converted
 * Return: absolute value of the integer argument
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else if (n >= 0)
		return (n);
	return (0);
}
