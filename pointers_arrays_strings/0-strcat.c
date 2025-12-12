#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Description: This function appends the string pointed to by @src
 * to the end of the string pointed to by @dest. The terminating null
 * byte of @dest is overwritten, and a new null byte is added at the end
 * of the resulting concatenated string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy characters from src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the null terminator */
	dest[i] = '\0';

	return (dest);
}
