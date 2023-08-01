/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: Pointer to the pointer that will be updated.
 * @to: Pointer to the char array that @s will point to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

