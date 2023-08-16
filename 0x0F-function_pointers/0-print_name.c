#include <stdio.h>

/**
 * print_name - Prints a name using a provided function.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to the function used to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_to_console - Prints a string to the console.
 * @name: Pointer to the string to be printed.
 */
void print_to_console(char *name)
{
	printf("Name: %s\n", name);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char name[] = "John Doe";

	print_name(name, print_to_console);

	return (0);
}

