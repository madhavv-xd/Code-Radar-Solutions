#include <stdio.h>
int main(){
    int a , b;
    scanf("%d %d" , &a , &b);
    printf((a > b) ? "%d" , a : "%d" , b);
    return 0;
}