#include <stdio.h>
void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) { // reducing the search space 
            if(arr[j] > arr[j+1]) {
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

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr , n);
    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i+1]){
            cnt++;
        }
        if(cnt > n/2){
            printf("%d" , arr[i]);
        }
        else{
            printf("-1");
        }
    }
    return 0;
}