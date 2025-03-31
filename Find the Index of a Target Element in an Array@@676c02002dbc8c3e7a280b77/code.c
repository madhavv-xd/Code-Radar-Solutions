#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) { // Adjusted to include all elements in the array
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int l = 0, r = n - 1;
    int result = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) {
            result = mid;
            break; 
        }
        if (arr[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    printf("%d\n", result); 
    return 0;
}