#include <stdio.h>

/* Copy stdin to stdout char by char */

int main()
{
    char c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}