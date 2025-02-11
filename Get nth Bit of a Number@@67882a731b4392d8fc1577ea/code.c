#include <stdio.h>

int main() {
    int a  , b;
    scanf("%d %d", &a , &b);
    printf(a >> (b-1) & 1);
    return 0;
}