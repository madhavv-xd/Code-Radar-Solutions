#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize a variable to keep track of the maximum seen so far
    int max_so_far = -1;
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i];  // Store the current element temporarily
        arr[i] = max_so_far; // Replace the current element with the maximum so far
        if (temp > max_so_far) {
            max_so_far = temp; // Update the maximum so far
        }
    }

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}