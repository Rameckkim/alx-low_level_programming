#include <stdlib.h>

/**
 * print_name - Prints a name using a provided function.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to the function used to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

/**
 * print_to_memory - Writes a name to memory.
 * @name: Pointer to the name to be written to memory.
 */
void print_to_memory(char *name)
{
	/* Write the name to memory (Replace this with actual logic) */
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char name[] = "John Doe";

	/* Print the name using print_name and print_to_memory function */
	print_name(name, print_to_memory);

	return (0);
}

