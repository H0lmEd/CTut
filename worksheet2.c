#include <stdio.h>

int main (void) {
    int     andrew_age;
    int     edAge;
    float   andrew_height;
    float   edHeight;
    float   edShoeSize;
    float   andrewShoeSize;

    andrew_age = 43;
    andrew_height = 1.8;
    edAge = 19;
    edHeight = 1.78;
    edShoeSize = 8.5;
    andrewShoeSize = 7.5;

    printf("Andrew's age is %d and his height is %f\n",
            andrew_age, andrew_height);
    printf("Ed's age is %d and his height is %f\n",
            edAge, edHeight);
    printf("Andrew's Shoe size is %f, Ed's is %f\n",
            andrewShoeSize, edShoeSize);

    return 0;
}
