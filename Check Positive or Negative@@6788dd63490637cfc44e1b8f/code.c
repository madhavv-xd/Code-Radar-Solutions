#include <stdio.h>
int main(){
    int a;
    scanf("%d" , &a);
    printf((a > 0) ? "Positive" : "Negative" : "Zero");
    return 0;
}