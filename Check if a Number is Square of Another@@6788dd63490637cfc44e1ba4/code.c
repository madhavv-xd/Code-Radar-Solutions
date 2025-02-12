#include <stdio.h>
int main(){
    int a , b;
    scanf("%d %d" , &a , &b);
    printf((a == b*b) ? "Yes" : "No");
    return 0;
}