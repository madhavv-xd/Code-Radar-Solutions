#include <stdio.h>

void printPalindromicTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

    
        
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPalindromicTriangle(n);
    return 0;
}
