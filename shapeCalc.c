#include <stdio.h>

int main (void) {
    int option;
    printf("What do you want to calculate?\n1) Parabola Area\n2) Triangle Area\n: ");
    scanf("%d", &option);

    if (option == 1) {
        printf("You chose Parabola!\n");
        float paraBase;
        float paraHeight;
        printf("Enter your Base: ");
        scanf("%f", &paraBase);
        printf("Enter your Height: ");
        scanf("%f", &paraHeight);
        float area = paraBase * paraHeight;
        printf("Area of your Parabola: %f", area);
    } else if (option == 2) {
        printf("You chose Triangle!\n");
        float triangleBase;
        float triangleHeight;
        printf("Enter your Base: ");
        scanf("%f", &triangleBase);
        printf("Enter your Height: ");
        scanf("%f", &triangleHeight);
        float area = triangleBase * triangleHeight;
        printf("Area of your Triangle: %f", area);
    } else {
        printf("You didn't chose correctly!");
    }
    return 0;
}
    
