/**
 * _strncpy - Copies a string
 * @dest: The destination buffer to copy to
 * @src: The source string to copy from
 * @n: The maximum number of bytes to copy
 *
 * Description: This function copies up to 'n' bytes from the 'src' string
 * to the 'dest' buffer. If 'src' is less than 'n' bytes long, the remaining
 * bytes in 'dest' will be filled with null bytes until 'n' bytes are copied.
 *
 * Return: A pointer to the resulting string 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}


	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

