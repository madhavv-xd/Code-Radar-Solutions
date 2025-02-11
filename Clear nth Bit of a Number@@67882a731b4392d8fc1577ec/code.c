#include <stdio.h>

int clearNthBit(int num, int n) {
    // Create a mask with the nth bit set to 1
    int mask = 1 << n;
    // Invert the mask
    mask = ~mask;
    // Perform bitwise AND with the number
    return num & mask;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = clearNthBit(a, b);
    printf("%d\n",  result);

    return 0;
}
