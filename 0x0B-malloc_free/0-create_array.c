#include <stdlib.h>

/**
 * create_array - Create an array of chars and initialize
 *                with specific char.
 * @size: Size of array
 * @c: Char to initialize
 *
 * Return: Pointer to array, or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	/* Check if size is zero */
	if (size == 0)
		return (NULL);

	/* Allocate memory for array */
	array = (char *)malloc(size * sizeof(char));

	/* Check if allocation succeeded */
	if (array == NULL)
		return (NULL);

	/* Initialize array with given char */
	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	return (array); /* Return pointer to array */
}

