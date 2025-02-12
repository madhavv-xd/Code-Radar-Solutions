#include <stdio.h>
int main(){
    char a;
    scanf("%c" , &a);
    printf((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') ? "Vowel" : "Consonant" : (0 <= a <= 9) ? "Digit" : "Special Character");
    return 0;
}