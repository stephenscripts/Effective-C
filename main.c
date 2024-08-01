#include <stdio.h>
#include <stdlib.h>
#include "Hallo.c"

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void newSwap(int *pa, int *pb){
    int y = Square(54);
    int t = *pa;
    *pa = *pb;
    *pb = t;
    //malloc(230);
    //uintmax_t;
    //intmax_t;
    enum weekdays {Sun, Mon, Tues, Weds, Thurs, Fri, Sat};
    enum cardinal_points { north = 0, east = 90, south = 180, west = 270 };
    enum months { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
}

void increment(void){
    static unsigned int count = 0;
    count++;
    printf(">> %d\n", 3*count);
}

struct S{
    int i; double d; char c;
};

void arrayTries(){
    char str[11];
    for (unsigned int i = 1; i < 10; i++){
        str[i] = 'O' + i;
        //printf("/%d", str[1]);
    }
    //str[10] = '/0';
}

int permutation(int x){
    int y = 0;
    while(x-1 > 0){
        y = y + (x * (x-1));
    }
    return y;
}

int main(void) {
    unsigned char bad_buff[sizeof(struct S)];
    _Alignas(struct S) unsigned char good_buff[sizeof(struct S)];

    struct S *bad_s_ptr = (struct S *)bad_buff;
    struct S *good_s_ptr = (struct S *)good_buff;

//    if (puts("Hallo Schatz!") == EOF){
//        return EXIT_FAILURE;
//    }
    double m = 7.0/3.0;
    //printf("%f", m);

    int a = 23, pa = 100;
    int b = 32, pb = 150;
    int kp = permutation(10);
    swap(a, b);
    newSwap(&pa, &pb);
    arrayTries();
    //printf("main: a = %d, b = %d\n", a, b);
    //printf("main: pa = %d, pb = %d\n", pa, pb);
    printf("permutation: %d", kp);

    for(int i = 0; i < 5; i++){
        increment();
    }
    return 0;
}
