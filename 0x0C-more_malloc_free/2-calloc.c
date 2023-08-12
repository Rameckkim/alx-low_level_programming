#include "main.h"

/**
 * *_calloc - allocate memory to an array
 * @nmemb: size of array
 * @size: size of each member
 * Return: pointer to array and NULL if anything fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int bytes, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	bytes = nmemb * size;

	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < bytes; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}
