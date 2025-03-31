#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int ans[n];
    for (int i = 0; i < n; i++) {
        ans[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}