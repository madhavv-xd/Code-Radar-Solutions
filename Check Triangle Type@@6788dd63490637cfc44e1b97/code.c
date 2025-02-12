#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%s", (a == b && b == c) ? "Equilateral" : 
                 (a == b || b == c || a == c) ? "Isosceles" : "Scalene");
    return 0;
}
