#include "main.h"

/**
 * swap_int - swaps two intergers
 * @a: first interger pointer
 * @b: second interger pointer
 * Return: always zero
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

