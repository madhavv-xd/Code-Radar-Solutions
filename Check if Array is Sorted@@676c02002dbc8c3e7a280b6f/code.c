#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int sorted = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= a[i+1]){
            sorted = 1;
        }
    }
    if(sorted == 1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}
