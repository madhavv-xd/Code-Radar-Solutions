#include <stdio.h>

void swapNumbers(int a, int b) {
    if (a == b) return;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapNumbers(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
