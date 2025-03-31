#include <stdio.h>
void bubbleSort(int arr[] , int size){
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
int main() {
    int n;
    scanf("%d", &n);


    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubbleSort(a , n);
    for(int i = 0; i <= n-1; i++){
      printf("%d" , arr[n-2]);
    }
    return 0;
}