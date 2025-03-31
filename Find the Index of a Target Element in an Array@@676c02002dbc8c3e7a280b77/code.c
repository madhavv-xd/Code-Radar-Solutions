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

    for(int i = 0; i < n- 1; i++){
        if(arr[i] == target){
            printf("%d" , i);
            i++;
        }
        else{
            printf("-1");
        }
    }
    return 0;
}