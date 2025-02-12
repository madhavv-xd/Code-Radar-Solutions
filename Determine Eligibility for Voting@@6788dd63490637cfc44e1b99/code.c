#include <stdio.h>
int main(){
    int a;
    scanf("%d" , &a);
    printf((a >= 18) ? "Eligible" : "Not Eligible");
    return 0;
}