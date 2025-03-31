#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - 1; i++){
        if(a[i] == a[n-i-1]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }


    return 0;
}