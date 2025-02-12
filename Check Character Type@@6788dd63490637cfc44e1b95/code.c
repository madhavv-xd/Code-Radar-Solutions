#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    printf("%s", 
        (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
         a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') ? "Vowel" : 
        ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) ? "Consonant" : 
        (a >= '0' && a <= '9') ? "Digit" : "Special Character");

    return 0;
}
