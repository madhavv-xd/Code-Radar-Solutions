#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sorted = 1;  
    for (int i = 1; i < n; i++) {
        if (a[i-1] > a[i]) {  
            sorted = 0;
            break;  
        }
    }

    if (sorted) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}