#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMajorityElement(int arr[], int n) {
    int cnt = 1, maxCnt = 1, majority = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        if (cnt > maxCnt) {
            maxCnt = cnt;
            majority = arr[i];
        }
    }

    return (maxCnt > n / 2) ? majority : -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    printf("%d\n", findMajorityElement(arr, n));

    return 0;
}
