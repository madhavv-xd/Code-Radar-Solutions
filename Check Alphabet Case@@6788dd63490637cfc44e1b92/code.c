#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    printf((65 <= a &&  a <= 90) ? "Uppercase" : (97<= a && a <= 122) ? "Lowercase" : "Not an Alphabet");
    return 0;
}