#include <stdio.h>

/* Copy stdin to stdout char by char */

int main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}