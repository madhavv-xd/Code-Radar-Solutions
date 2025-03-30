//good question
#include <stdio.h>
int findUnsortedSubarray(int arr[] , int n){
    int l = 0 , r = n - 1;

    //set left and right boundaries
    while(l < n - 1 && arr[l] <= arr[l+1]){
        l++;
    }

    //check if it is sorted already;
    //l will reach full right
    if(l == n-1){
        return 0;
    }

    while(r > 0 && arr[r] >= arr[r-1]){
        r--;
    }
    int min  = arr[l], int max = arr[l];
    for(int i = l; i <= r; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    while(l > 0 && arr[l-1] > min){
        l--;
    }
    while(r < n - 1 && arr[r + 1] < max){
        r++;
    }
    return r-l+1;
}