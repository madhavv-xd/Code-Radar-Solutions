#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Replace all elements with the last element
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[n - 1];
    }

    // Set the last element to -1
    arr[n - 1] = -1;

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
