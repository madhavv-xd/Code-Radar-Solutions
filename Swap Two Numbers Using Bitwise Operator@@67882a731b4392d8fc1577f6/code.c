#include <stdio.h>

void swapNumbers(int x, int y) {
    if (x == y) return;
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swapNumbers(&a, &b);
    printf("%d %d", a, b);

    return 0;
}
