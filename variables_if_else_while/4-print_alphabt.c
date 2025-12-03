#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        if (c == 'e' || c == 'q')
            continue;
        putchar(c);   /* first putchar */
    }

    putchar('\n');    /* second putchar */

    return (0);
}

