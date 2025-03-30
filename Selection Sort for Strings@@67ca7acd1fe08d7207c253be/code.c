#include <stdio.h>

void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            // Use strcmp to compare strings
            if (strcmp(arr[j], arr[min]) < 0) {
                min = j;
            }
        }
        // Swap the strings
        char temp[100];
        strcpy(temp, arr[min]);
        strcpy(arr[min], arr[i]);
        strcpy(arr[i], temp);
    }
}

void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);  // Corrected format specifier
    }
    printf("\n");
}

