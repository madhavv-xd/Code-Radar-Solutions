#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);

    int arr[100];
    for(int i = 0; i < n - 1; i++){
        scanf("%d" , &arr[i]);
    }

    int target;
    scanf("%d" , &target);

    int l = 0 , r = n -1;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(arr[mid] == target){
            return mid;
        }
        if (arr[mid] < target){
            l = mid + 1; 
        }
        else{
            r = mid - 1;
        }
    }
    return -1;
}