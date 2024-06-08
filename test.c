#include <stdio.h>

void curseword(int i);

int main() {
    curseword(2);
}

void curseword(int n) {
    for (int i = 0; i < n; i++) {
        printf("monstercat\n");
    }
}
