#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;

    printf("\nSwap: a = %d, b = %d\n", a, b);
}

int main(void) {
    if (puts("Hallo Schatz!") == EOF){
        return EXIT_FAILURE;
    }
    double m = 7.0/3.0;
    printf("%f", m);

    int a = 23;
    int b = 32;

    swap(a, b);
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}
