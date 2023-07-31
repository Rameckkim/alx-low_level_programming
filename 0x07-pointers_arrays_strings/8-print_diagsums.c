#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the square matrix (number of rows or columns).
 *
 * Return: None (void function).
 */
void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
		diag2_sum += a[i * size + (size - 1 - i)];
	}

	printf("Sum of first diagonal: %d\n", diag1_sum);
	printf("Sum of second diagonal: %d\n", diag2_sum);
}

