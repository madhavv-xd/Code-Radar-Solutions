#include <stdio.h>
void bubblesort(int arr[] , int size){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){ //reducing the search space 
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
    }
}

void printArray(int arr[] , int size){
    for(int i = 0; i < size; i++){
        printf("%d" , arr[i]);
    }
    printf("\n");
}