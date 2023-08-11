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
	if (min > max)
		return (NULL);

	int *arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)

		return (NULL);

	for (int i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}

int main(void)
{
	int *arr;
	int min = 5;
	int max = 15;

	arr = array_range(min, max);

	if (arr)
	{
		for (int i = 0; i <= max - min; i++)
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

