#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf((a > 0 && b > 0) ? "True" : "False");
    return 0;
}