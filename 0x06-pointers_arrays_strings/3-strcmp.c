/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Description: This function compares the two strings 's1' and 's2'.
 * It compares the individual characters of both strings until a
 * difference is found or until the null of either string is reached.
 *
 * Return: An integer less than,  or greater than zero if 's1' is found,
 * respectively, to be less than, to match, or be greater than 's2'.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}


	return (s1[i] - s2[i]);
}

