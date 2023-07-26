#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: the arrays to be printed
 * @n: length of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int loop;

	loop = 0;
	while (loop < n)
	{
		printf("%d", a[loop]);
		loop++;
		if (loop != n)
			printf(", ");
	}
	printf("\n");
}
