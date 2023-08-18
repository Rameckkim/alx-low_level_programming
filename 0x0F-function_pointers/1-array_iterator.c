#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

/**
 * print_element - Prints an element.
 * @num: The element to be printed.
 */
void print_element(int num)
{
	printf("%d ", num);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int myArray[] = {1, 2, 3, 4, 5};
	size_t arraySize = sizeof(myArray) / sizeof(myArray[0]);

	/* Print each element using array_iterator and print_element function */
	array_iterator(myArray, arraySize, print_element);
	
	printf("\n");

	return (0);
}

