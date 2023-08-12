#include "main.h"

/**
 * *array_range - create array of integers
 * @min: starting point
 * @max: ending point
 * Return: pointer to the array of integers
 */

int *array_range(int min, int max)
{
	int *i;
	int j, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	i = malloc(sizeof(int) * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		i[j] = min + j;
	return (i);
}
