#include <stdio.h>
void bubbleSort(char arr[] , int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){ //reducing the search space 
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
    }
}

void printArray(char arr[] , int size){
    for(int i = 0; i < size; i++){
        printf("%c " , arr[i]);
    }
    printf("\n");
}