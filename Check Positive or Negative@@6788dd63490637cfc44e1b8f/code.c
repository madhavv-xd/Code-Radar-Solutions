#include <stdio.h>
int main(){
    int a;
    scanf("%d" , &a);
    printf((a > 0) ? "Positive" ? (a < 0) ? "Negative" : "Zero");
    return 0;
}