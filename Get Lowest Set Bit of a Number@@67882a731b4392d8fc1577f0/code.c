#include <stdio.h>

int getLowestSetBitPosition(int num) {
    if (num == 0) return -1; 
    int position = 0;
    while ((num & 1) == 0) { 
        num >>= 1;
        position++;
    }
    return position;
}

int main() {
    int a;
    scanf("%d", &a);
    int lowestSetBitPos = getLowestSetBitPosition(a);
    printf("%d\n", lowestSetBitPos);
    return 0;
}

