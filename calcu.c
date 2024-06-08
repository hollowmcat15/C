#include<stdio.h>

int add(int a, int b);

int main(void) {

    int x;
    int y;

    printf("Enter number 1: ");
    scanf("%i", &x);

    printf("Enter number 2: ");
    scanf("%i", &y);

    int z = add(x, y);
    printf("Answer: %i\n", z);

}

int add(int a, int b) {

    return a + b;

}