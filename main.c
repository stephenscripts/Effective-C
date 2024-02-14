#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void newSwap(int *pa, int *pb, unsigned int x){
    int t = *pa;
    *pa = *pb;
    *pb = t;
    x = *pb;
}

int main(void) {
    if (puts("Hallo Schatz!") == EOF){
        return EXIT_FAILURE;
    }
    double m = 7.0/3.0;
    printf("%f", m);

    int a = 23, pa = 100;
    int b = 32, pb = 150;

    static unsigned int x;
    swap(a, b);
    newSwap(&pa, &pb, x);

    printf("main: a = %d, b = %d\n", a, b);
    printf("main: pa = %d, pb = %d, x = %d\n", pa, pb, x);
    return 0;
}
