#include <stdio.h>

main(){
    float fahr, celcius;
    int upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    while (celcius <= upper){
        fahr = (celcius + 32) * (9/5);
        printf ("%3.0f\t%6.3f\n", celcius, fahr);
        celcius = celcius + step;
    }
}
