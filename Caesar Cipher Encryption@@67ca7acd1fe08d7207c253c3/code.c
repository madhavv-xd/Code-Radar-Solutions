#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char message[], int shift, char encrypted[]) {
    int len = strlen(message);
    
    for(int i = 0; i < len; i++) {
        char c = message[i];
        
        if(isalpha(c)) {
            // It should be isupper() not isUpper()
            char base = isupper(c) ? 'A' : 'a';
            
            encrypted[i] = (char)(((c - base + shift) % 26) + base);   
        }
        else {
            encrypted[i] = c;
        }
    }
    
    // This should be outside the loop
    // And it should be len, not i
    encrypted[len] = '\0';
}