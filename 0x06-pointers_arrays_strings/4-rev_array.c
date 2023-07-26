/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements in the array
 *
 * Description: This function reverses the elements of the integer array 'a'.
 * It swaps the first with the last element, the second element with
 * the second-to-last and so on, until the middle of the array is reached.
 *
 * Return: void (no return value)
 */
void reverse_array(int *a, int n)
{
	int temp, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{

		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}

