#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *
 * @a: Pointer to the first element of the square matrix.
 * @size: The size of the square matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	/* Calculate the sum of the first diagonal (from top-left to bottom-right) */
	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
	}

	/* Calculate the sum of the second diagonal (from top-right to bottom-left) */
	for (i = 0; i < size; i++)
	{
		diag2_sum += a[i * size + (size - 1 - i)];
	}

	/* Print the sum of the diagonals */
	printf("Sum of the first diagonal: %d\n", diag1_sum);
	printf("Sum of the second diagonal: %d\n", diag2_sum);
}

