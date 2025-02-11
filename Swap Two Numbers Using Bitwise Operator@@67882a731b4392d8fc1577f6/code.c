#include <stdio.h>

void swapNumbers(int a, int b) {
    if (a == b) return;
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swapNumbers(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
