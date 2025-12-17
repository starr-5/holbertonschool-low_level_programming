#include <stdio.h>
#include <ctype.h>

/**
 * main - checks if a character is uppercase
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int main(void)
{
    char c = 'A'; /* Example character */

    if (isupper(c))
        return (1);
    else
        return (0);
}
