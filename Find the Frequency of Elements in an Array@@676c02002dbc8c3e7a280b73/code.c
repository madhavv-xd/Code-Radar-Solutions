#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int cnt  = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; i < n - 1; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
            else{
                i = j;
            }
        }
    }
    return 0;
}