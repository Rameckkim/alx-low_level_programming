#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value of the range
 * @max: The maximum value of the range
 *
 * Return: A pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}

int main(void)
{
	int *arr;
	int min = 5;
	int max = 15;
	int i;

	arr = array_range(min, max);

	if (arr)
	{
		for (i = 0; i <= max - min; i++)
			printf("%d ", arr[i]);
		printf("\n");

		free(arr);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}

