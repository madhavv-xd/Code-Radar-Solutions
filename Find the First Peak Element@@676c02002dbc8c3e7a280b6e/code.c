#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int l = 0, r = n - 1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (a[mid] > a[mid + 1]) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    if(arr[l] > 1){
        printf("%d" , -1);
    }
    printf("%d\n", a[l]);
    return 0;
}