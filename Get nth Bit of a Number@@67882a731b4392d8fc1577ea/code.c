#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (a >> b) & 1); // Correctly using 0-based indexing
    return 0;
}
