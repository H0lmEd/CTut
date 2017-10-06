#include <stdio.h>

int main (void) {
    int a = 7;
    char c = 'w';

    printf("%2d %2d\n", sizeof(a), sizeof(c));
    printf("%2d %2d\n", sizeof(int), sizeof(char));

    return 0;
}
