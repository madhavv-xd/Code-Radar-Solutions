#include <stdio.h>
#include <stdio.h>

void swapNumbers(int x, int y) {
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("%d %d", a, b);
    return 0;
}