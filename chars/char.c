#include <stdio.h>
/*
 * desc: copy input to output
 * ver: 2nd version
*/
int main()
{
    int c;

    while ((c = getchar()) != EOF ) {
        putchar(c);
    }
    return 0;
}
