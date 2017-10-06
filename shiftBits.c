#include <stdio.h>

int main (void) {
    unsigned char a = 9;
    unsigned char b = 7;
    unsigned char c;
    c = a & b;                  
    printf("a & b = %03u\n", c); //AND  00001001
                                 //     00000111 +
                                 //     --------
                                 //     00000000
    c = a | b;
    printf("a | b = %03u\n", c); //OR   00001001
                                 //     00000110 
                                 //     --------
                                 //     00001111
                                 //
                                 //
    c = b << 3;
    printf("B << 3 = %03u\n", c); // SHIFT LEFt

    return 0;
}
