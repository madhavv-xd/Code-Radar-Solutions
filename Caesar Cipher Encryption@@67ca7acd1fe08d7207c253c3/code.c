#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char message[], int shift, char encrypted[]) {
    int len = strlen(message);
    
    for (int i = 0; i < len; i++) {
        char c = message[i];
        
        if (isalpha(c)) {
            // Determine if uppercase or lowercase
            char base = isupper(c) ? 'A' : 'a';
            
            // Apply the shift and wrap around
            encrypted[i] = (char)(((c - base + shift) % 26) + base);
        } else {
            // Keep non-alphabetic characters unchanged
            encrypted[i] = c;
        }
    }
    
    encrypted[len] = '\0';
}

