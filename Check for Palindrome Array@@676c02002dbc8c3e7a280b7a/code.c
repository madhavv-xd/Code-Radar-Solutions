#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int pal = 1;
    for(int i = 0; i < n / 2; i++){
        if(a[i] != a[n-i-1]){
            pal = 0;
            break;
        }
    }
    if(pal){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}