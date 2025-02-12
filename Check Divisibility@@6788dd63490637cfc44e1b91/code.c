#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    printf((a % 5 == 0) & (a % 11 == 0) ? "Divisible" : "Not Divisible");
    return 0;
}