#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);

    int arr[100];
    for(int i = 0; i<n; i++){
        printf("%d" , &arr[i])
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n - 1; j++){
            if(i < j){
                arr[i] = arr[j];
            }
        }
    }
    arr[n-1] = -1;

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}