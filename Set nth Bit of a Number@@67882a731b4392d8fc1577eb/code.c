#include <stdio.h>

int setBit(int num, int pos) {
    return num | (1 << pos);
}

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);
    
    int result = setBit(num, pos);
    printf("%d", result);
    
    return 0;
}