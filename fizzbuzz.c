#include <stdio.h>

int main() {
    for (int a = 0; a != 30; a++) {
        if (a % 3 == 0) {
            printf("Fizz");
        } 
        if (a % 5 == 0) {
            printf("Buzz");
        }
        if (a % 5 != 0 && a % 3 != 0) {
            printf("%c", a);
        }
    }
    return 0;
}
