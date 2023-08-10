#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 *
 * Return: Pointer to the allocated memory
 *         Exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(98);
	}

	return (ptr);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int size = 10;  /* Adjust the size as needed */

	int *arr = (int *)malloc_checked(size * sizeof(int));

	/* Now you can use 'arr' as a dynamically allocated array */

	free(arr);  /* Don't forget to free the allocated memory */

	return (0);
}

