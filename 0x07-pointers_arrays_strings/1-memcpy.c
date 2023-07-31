/**
 * _memcpy - Copies n bytes from the memory area src to the memory area dest.
 *
 * @dest: Pointer to the destination memory area where data will be copied.
 * @src: Pointer to the source memory area from where data will be copied.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

