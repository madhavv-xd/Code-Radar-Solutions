#include <stdio.h>
int main(){
    int a;
    scanf("%d" , &a);
    printf((a >= 0 && a <= 100) ? "In Range" : "Out of Range");
    return 0;
}