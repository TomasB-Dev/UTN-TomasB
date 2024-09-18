#include <stdlib.h>
#include <stdio.h>

void main() {
    for (int i = 1; i <= 10; i++) {
        for (int x = 10; x >= i; x--) {
            printf("@");
        }
        printf("\n");
    }
    
}