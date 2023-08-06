#include <stdio.h>

/**
 * main - checks numberof arguments passed to it
 * @argc: enters argument count
 * @argv: enters argument vector
 * Return: 0 if sucessful
 */

int main(int argc, char *argv[])
{
	int sum, i;


	i = 0;
	while (i < argc && *argv[i] != '\0')
	{
		i++;
		sum = argc - 1;
	}
	printf("%d\n", sum);

	return (0);
}
