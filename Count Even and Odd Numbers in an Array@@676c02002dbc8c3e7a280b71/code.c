#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int evc = 0;
    int occ = 0;
    for(int i = 0; i<n; i++){
        if(i % 2 == 0){
            evc++;
        }
        else{
            occ++;
        }
    }
    printf("%d %d" , evc , occ);
    return 0;
}