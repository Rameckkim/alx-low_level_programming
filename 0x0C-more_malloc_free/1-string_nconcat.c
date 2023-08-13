#include "main.h"

/**
 * *string_nconcat - concentes 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: the pointer to new allocated memmory, NULL if no space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, len, len2;
	unsigned int j;

	for (i = 0; s1[i] != '\0'; i++)
		len++;
	if (n == 0)
	{
		p = malloc(sizeof(char) * len + 1);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
			p[i] = s1[i];
		p[i] = '\0';
		return (p);
	}
	for (j = 0; s2[j] != '\0' && j <= n; j++)
		len2++;
	p = malloc(sizeof(char) * (len +  len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = s1[i];
	for (j = 0; j < (unsigned int) len2; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
