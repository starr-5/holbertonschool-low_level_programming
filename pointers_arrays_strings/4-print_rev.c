#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 */
void print_rev(char *s)
{
    int i = 0;

    /* find the length of the string */
    while (s[i] != '\0')
    {
        i++;
    }

    /* print the string in reverse */
    for (i = i - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}
