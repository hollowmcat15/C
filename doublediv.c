#include<stdio.h>

int main() {

    int x, y;

    printf("Number 1: ");
    scanf("%i", &x);

    printf("Number 2: ");
    scanf("%i", &y);

    float z = (float) x / (float) y;
    printf("Answer: %0.10f", z);
}