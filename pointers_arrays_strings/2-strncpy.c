#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes from src to copy
 *
 * Description: This function copies at most @n bytes from the string
 * pointed to by @src into the buffer pointed to by @dest. If @src is
 * shorter than @n bytes, the remaining bytes in @dest are padded with
 * null bytes. The result is not guaranteed to be null-terminated if
 * @src has length >= @n.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad with null bytes if src ends early */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
