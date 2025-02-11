#include <stdio.h>

int clearNthBit(int num, int n) {
    int mask = 1 << n;
    mask = ~mask;
    return num & mask;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = clearNthBit(a, b);
    printf("%d\n",  result);

    return 0;
}
