#include <stdio.h>

/* count lines in input */
main() {
    int c, nl, bl, tb;
    nl = 0;
    bl = 0;
    tb = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tb;
        if (c == '\0')
            ++bl;
        }
    printf ("%d\t%d\t%d\n", nl, bl, tb);
}
