#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_array - Function to print the elements of an integer array
 * @a: Pointer to the integer array
 * @n: Number of elements to be printed
 *
 * Return: void (no return value)
 */
void print_array(int *a, int n)
{
	if (n <= 0 || a == NULL)
		return;

	for (int i = 0; i < n; i++)
	{
		if (i > 0)
			putchar(',');

		int num = a[i];

		if (num == 0)

			putchar('0');
		else
		{
			char buffer[10];
			int idx = 0;

			if (num < 0)
			{
				putchar('-');
				num = -num;
			}
			while (num != 0)
			{
				buffer[idx++] = num % 10 + '0';
				num /= 10;
			}
			/* Print the digits in reverse order */
			while (idx > 0)
			{
				putchar(buffer[--idx]);
			}
		}
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Example usage of the print_array function */
	int arr[] = {45, -102, 0, 67, -789};
	int size = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, size);
	putchar('\n');

	return (0);
}
