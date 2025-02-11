#include <stdio.h>

int clearNthBit(int num, int n) {
    int mask = 1 << n;
    return num ^ mask;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = clearNthBit(a, b);
    printf("Number after clearing the %dth bit: %d\n", b, result);

    return 0;
}
