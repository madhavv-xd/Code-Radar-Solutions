#include <stdio.h>

int main(){
    char a;
    scanf("%d", &a);
    printf((65 < a < 90) ? "Uppercase" : (97<a<122) ? "Lowercase" : "Not an Alphabet");
    return 0;
}