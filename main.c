#include <stdio.h>
#include <stdlib.h>

int main(void) {
    if (puts("Hallo Schatz!") == EOF){
        return EXIT_FAILURE;
    }
    double m = 7.0/3.0;
    printf("%f", m);
    return EXIT_SUCCESS;
}
