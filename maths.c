#include <stdio.h>
#include <math.h>

int main (void) {
    double opposite, adjacent, hypotenuse;

    printf("Input the opposite side of the triangle: ");
    scanf("%lf", &opposite);

    printf("Input the adjacent side of the triangle: ");
    scanf("%lf", &adjacent);

    hypotenuse = sqrt(opposite*opposite + adjacent*adjacent);
    printf("Hypotenuse = %lf\n", hypotenuse);

    return 0;
}
