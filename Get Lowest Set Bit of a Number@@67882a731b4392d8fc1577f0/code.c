#include <stdio.h>

int getLowestSetBit(int num) {
    return num & (~num + 1);
}

int main() {
    int a;
    scanf("%d", &a);
    int lowestSetBit = getLowestSetBit(a);
    printf("%d\n", lowestSetBit);
    return 0;
}
