#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (a >> (b-1)) & 1); // Added format specifier and parentheses
    return 0;
}
