/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string to capitalize
 *
 * Description: This function takes an input string 'str' and capitalizes the
 * first character of each word in the string. Words are separated by the
 * specified separators: space, tabulation, new line, comma, semicolon, period,
 * exclamation mark, question mark, double quotes, opening parenthesis,
 * closing parenthesis, opening brace, and closing brace. The function modifies
 * the string in place and returns a pointer to the modified string.
 *
 * Return: A pointer to the modified string 'str'
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;


	while (str[i] != '\0')
	{

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{

			capitalize_next = 1;
		}

		else if ((str[i] >= 'a' && str[i] <= 'z') && capitalize_next)
		{

			str[i] = str[i] - 'a' + 'A';

			capitalize_next = 0;
		}
		else
		{

			capitalize_next = 0;
		}

		i++;
	}

	return (str);
}

