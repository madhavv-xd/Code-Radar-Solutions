#include <stdio.h>
#include <string.h>
void caesarCipher(char message[], int shift, char encrypted[]) {
    int len = strlen(message);

    for (int i = 0; i < len; i++) {
        encrypted[i] = message[i] + shift;
    }

    encrypted[len] = '\0'; 
    
}

