#include <stdio.h>
#include <string.h>
int main (void) {
    char name[25];
    printf("Your name: ");
    scanf("%s", name);
    printf("Hello %s", name);
    return 0;
}
