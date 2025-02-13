#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int a[number];
    for(int i = 0; i < number; i++) {
        scanf("%d", &a[i]);
    }

    int isSorted = 1; 
    for(int i = 1; i < number; i++) {
        if(a[i] < a[i-1]) {
            isSorted = 0; 
            break;
        }
    }

    if(isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
