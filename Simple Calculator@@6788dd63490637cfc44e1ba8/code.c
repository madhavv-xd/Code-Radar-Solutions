#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    
    printf("%d\n", 
           (c == '+') ? a + b : 
           (c == '-') ? a - b : 
           (c == '*') ? a * b : 
           (c == '/' && b != 0) ? a / b : 
           (printf("error")));
           
    return 0;
}
