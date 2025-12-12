#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string to encode
 *
 * Description: This function replaces the following letters with
 * their 1337 equivalents:
 *   - a and A -> 4
 *   - e and E -> 3
 *   - o and O -> 0
 *   - t and T -> 7
 *   - l and L -> 1
 * Only one if statement and two loops are used. No switch or ternary.
 *
 * Return: Pointer to the encoded string @s.
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet_vals[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_vals[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
