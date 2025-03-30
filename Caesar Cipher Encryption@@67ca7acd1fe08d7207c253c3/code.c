#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char message[], int shift, char encrypted[]) {
    int len = strlen(message);
    for(int i = 0; i <  len; i++){
        char c = message[i];
    }
    if(isalpha(c)){
        char base = isUpper(c) ? 'A' : 'a';

        encrypted[i] = (char)(((c-base+shift) % 26) + base);   
    }
    else{
        encrypted[i] = c;
    }
    encrypted[i] = '\0';
}

