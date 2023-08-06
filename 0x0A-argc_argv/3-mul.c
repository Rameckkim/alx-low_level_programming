#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies arguments
 * @argc: enters argument count
 * @argv: enters argument
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i, num, mul;

	num = argc - 1;
	mul = 1;

	if (num == 2)
	{
		for (i = 1; i < 3; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
