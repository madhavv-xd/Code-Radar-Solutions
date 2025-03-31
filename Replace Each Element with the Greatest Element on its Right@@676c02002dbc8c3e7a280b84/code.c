#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Modify the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            arr[i] = arr[j];
        }
    }
    arr[n - 1] = -1;

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}