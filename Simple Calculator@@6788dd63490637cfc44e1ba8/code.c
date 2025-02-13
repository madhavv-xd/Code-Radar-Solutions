#include <stdio.h>
int main(){
    int a , b;
    char c;
    scanf("%d %d %c" , &a , &b , &c);
    printf((c == '+') ? a + b : (c == '-') ? a - b : (c == '*') ? a*b : (c == '/') ? a / b : "error");
    return 0;
}