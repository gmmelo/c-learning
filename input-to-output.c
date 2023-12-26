#include <stdio.h>

/* Copy stdin to stdout char by char */

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}