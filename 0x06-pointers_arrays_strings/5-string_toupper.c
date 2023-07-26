/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The input string to convert
 *
 * Description: This function takes an input string 'str' and converts all
 * lowercase letters in the string to their corresponding uppercase letters.
 * The function modifies the string and returns a pointer to the string.
 *
 * Return: A pointer to the modified string 'str'
 */
char *string_toupper(char *str)
{
	int i = 0;


	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{

			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}

