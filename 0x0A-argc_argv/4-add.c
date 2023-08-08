#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is succesful and 1 if error
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
