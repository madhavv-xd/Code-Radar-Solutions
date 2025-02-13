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
           (printf("Error: Division by zero or Invalid operator\n"), 0));
           
    return 0;
}
