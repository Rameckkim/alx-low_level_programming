#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the name of the current source file.
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return (0);
}

