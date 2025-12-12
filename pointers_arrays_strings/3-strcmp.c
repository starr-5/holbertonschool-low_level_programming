#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Description: This function compares the strings pointed to by @s1
 * and @s2. It returns an integer less than, equal to, or greater than
 * zero if @s1 is found, respectively, to be less than, to match, or be
 * greater than @s2. The comparison is done using the unsigned values
 * of the characters.
 *
 * Return: The difference between the first differing characters
 * (s1[i] - s2[i]), or 0 if the strings are equal.
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

	/* If one string has ended, compare the null terminators */
	return (s1[i] - s2[i]);
}
