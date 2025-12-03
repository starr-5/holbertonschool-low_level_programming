#include <stdio.h>

int main(void)
{
    int c;

    for (c = 'z'; c >= 'a'; c--)
        putchar(c);   

    putchar('\n');    

    return (0);
}
