#include <stdio.h>

/**
 * main - start of the program
 * @argc: enter argument count
 * @argv: :enter argument vector
 * Return: 0 is succesful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
