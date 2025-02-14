#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    
    for (i = N; i >= 1; i--) {
        for (char j = 'A'; j <= 'A' + i- 1; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
    
    return 0;
}
