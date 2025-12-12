#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to be modified
 *
 * Description: A word is defined as a sequence of characters
 * separated by any of the following delimiters:
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * The first character of each word is converted to uppercase if
 * it is a lowercase letter. Other characters are left unchanged.
 *
 * Return: Pointer to the modified string @s.
 */
char *cap_string(char *s)
{
	int i = 0;

	/* Capitalize the first character if needed */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	/* Iterate through the string */
	while (s[i] != '\0')
	{
		/* Check if the previous character is a separator */
		if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
		     s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		     s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		     s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		     s[i - 1] == '}') &&
		    (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}

	return (s);
}
