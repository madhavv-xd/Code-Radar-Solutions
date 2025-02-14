#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int startValue = 1;
    for(int i = 1; i <= a; i++){
        int value = startValue;
        for(int j = 1; j <= i; j++){
            printf("%d ", value);
            value = 1 - value;  // Alternate the value between 0 and 1
        }
        startValue = 1 - startValue;  // Toggle the start value for the next row
        printf("\n");
    }
    return 0;
}
