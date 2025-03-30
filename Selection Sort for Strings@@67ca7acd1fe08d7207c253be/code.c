#include <stdio.h>

void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap characters
        char temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);  // Corrected format specifier
    }
    printf("\n");
}

int main() {
    char arr[] = {'s', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n'};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
