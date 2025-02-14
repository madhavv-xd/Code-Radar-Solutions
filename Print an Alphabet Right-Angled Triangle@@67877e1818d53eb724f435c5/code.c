#include <stdio.h>

void printAlphabetTriangle(int N) {
    for (int i = 0; i < N; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    printAlphabetTriangle(N);
    
    return 0;
}
