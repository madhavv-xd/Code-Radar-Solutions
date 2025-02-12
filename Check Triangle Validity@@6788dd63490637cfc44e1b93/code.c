#include <stdio.h>

int main() {
    int a  , b , c;
    scanf("%d %d %d", &a , &b , &c);
    printf((pow(a , 2) + pow(b , 2) == pow(c , 2)) ? "Valid" : "Invalid");
    return 0;
}
