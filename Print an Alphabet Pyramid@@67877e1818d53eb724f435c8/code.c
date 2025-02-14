#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        for(char j = 'A'; j <= 'A' + i; j++){
            printf("%c " , j);
        }
        printf("\n");
    }
}
