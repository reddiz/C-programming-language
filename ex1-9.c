#include <stdio.h>

main(){
    int c;
    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
        if (c == ' '){
            putchar(c);
        }
    }
}
