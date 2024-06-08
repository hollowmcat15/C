#include<stdio.h>

int main() {

    int n;

    do {
        printf("Enter dimension: ");
        scanf("%i", &n);
    }
    while (n < 1);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("0");
        }
    printf("\n");
    }
}