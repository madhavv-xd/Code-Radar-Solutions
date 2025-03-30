#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++){
        j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            arr[j- 1] = arr[j-1] ^ arr[j];
            arr[j] = arr[j-1] ^ arr[j];
            arr[j- 1] = arr[j-1] ^ arr[j];
            j--;
        }
        
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

