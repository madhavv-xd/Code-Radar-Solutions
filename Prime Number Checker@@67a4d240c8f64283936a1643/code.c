#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        printf("%d", 0);
        return;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d", 0);
            return;
        }
    }

    printf("%d", 1);
}