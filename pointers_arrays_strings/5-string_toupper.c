#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: pointer to the string to be converted
 *
 * Description: This function iterates through each character of the
 * string pointed to by @s. If a character is a lowercase letter
 * ('a' to 'z'), it is converted to the corresponding uppercase
 * letter ('A' to 'Z'). Non-lowercase characters are left unchanged.
 *
 * Return: Pointer to the resulting string @s.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		i++;
	}

	return (s);
}
