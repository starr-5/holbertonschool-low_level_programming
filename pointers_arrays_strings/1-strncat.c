#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes from src to append
 *
 * Description: This function appends the string pointed to by @src to
 * the end of the string pointed to by @dest. Only @n bytes from @src
 * are appended. If @src is longer than @n bytes, it does not need to
 * be null-terminated. The resulting string in @dest is always
 * null-terminated.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append at most n characters from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the null terminator */
	dest[i] = '\0';

	return (dest);
}
