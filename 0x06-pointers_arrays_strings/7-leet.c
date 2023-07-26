/**
 * leet - Encodes a string into 1337
 * @str: The input string to encode
 *
 * Description: This function takes an input string 'str' and encodes it
 * into 1337 format, where specific letters are replaced by numbers.
 * The encoding rules are:
 *  - 'a' and 'A' are replaced by '4'
 *  - 'e' and 'E' are replaced by '3'
 *  - 'o' and 'O' are replaced by '0'
 *  - 't' and 'T' are replaced by '7'
 *  - 'l' and 'L' are replaced by '1'
 * The function modifies the string and returns a pointer to the string.
 *
 * Return: A pointer to the modified string 'str'
 */
char *leet(char *str)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";


	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; leet_letters[j] != '\0'; j++)
		{

			if (str[i] == leet_letters[j])
			{

				str[i] = leet_numbers[j];
				break;
			}
		}
	}

	return (str);
}

