#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
