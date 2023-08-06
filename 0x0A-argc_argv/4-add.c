#include <stdio.h>
#include <stdlib.h>

/**
 * main - enters arguments
 * @argc: enters argument count
 * @argv: enters argument
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i, add;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
			add += atoi(argv[i]);
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", add);

	return (0);
}
