#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 *print-array - prints integer array
 * @a: Pointer to the integer array
 * @n: Number of elements to be printed
 *Return: always zero
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

			while (idx > 0)
			{
				putchar(buffer[--idx]);
			}
		}
	}

	putchar('\n');
}

int main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	int size = sizeof(array) / sizeof(array[0]);

	print_array(array, size);

	return (0);
}
