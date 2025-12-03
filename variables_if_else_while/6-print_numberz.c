#include <stdio.h>

int main(void)
{
    int i;

    for (i = 48; i <= 57; i++)
        putchar(i);       /* first putchar */

    putchar('\n');        /* second putchar */

    return (0);
}
