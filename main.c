#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void newSwap(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

void increment(void){
    static unsigned int count = 0;
    count++;
    printf(">> %d\n", 3*count);
}

struct S{
    int i; double d; char c;
};


int main(void) {
    unsigned char bad_buff[sizeof(struct S)];
    _Alignas(struct S) unsigned char good_buff[sizeof(struct S)];

    struct S *bad_s_ptr = (struct S *)bad_buff;
    struct S *good_s_ptr = (struct S *)good_buff;

    if (puts("Hallo Schatz!") == EOF){
        return EXIT_FAILURE;
    }
    double m = 7.0/3.0;
    printf("%f", m);

    int a = 23, pa = 100;
    int b = 32, pb = 150;

    swap(a, b);
    newSwap(&pa, &pb);

    printf("main: a = %d, b = %d\n", a, b);
    printf("main: pa = %d, pb = %d\n", pa, pb);

    for(int i = 0; i < 5; i++){
        increment();
    }
    return 0;
}
