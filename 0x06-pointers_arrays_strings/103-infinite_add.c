#include <stdio.h>
#include <string.h>

/**
 * reverse_string - Reverses a given string in-place.
 * @str: The string to be reversed.
 */
void reverse_string(char *str)
{
	int start = 0;
	int end = strlen(str) - 1;

	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two numbers and stores the result in a buffer.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (in the buffer r).
 *         If the result cannot be stored in r, the function returns 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, sum = 0, i = 0;

	/* Ensure the buffer size is sufficient to hold the result */
	if (size_r <= len1 || size_r <= len2)
		return (0);

	/* Start adding digits from the least significant digits */
	len1--;
	len2--;

	/* Loop through the numbers and perform addition */
	while (len1 >= 0 || len2 >= 0 || carry)
	{
		/* Calculate the sum of digits and carry */
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';

		/* Update carry for the next iteration */
		carry = sum / 10;

		/* Store the current digit in the result buffer */
		r[i] = '0' + (sum % 10);

		/* Move to the next position in the buffer and numbers */
		i++;
		len1--;
		len2--;
	}

	/* Null-terminate the result string */
	r[i] = '\0';

	/* Reverse the result string to get the correct order */
	reverse_string(r);

	return (r);
}

