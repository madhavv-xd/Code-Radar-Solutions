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

      printf("%d" , a[n-2]);
      for(int i = 0; i< n-1; i++){
        if(arr[n] == arr[n-i]){
            printf("%d" , -1);
        }
      }
    
    return 0;
}