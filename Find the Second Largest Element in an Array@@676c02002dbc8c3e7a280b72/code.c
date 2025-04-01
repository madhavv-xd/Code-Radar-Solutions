#include <stdio.h>

int main() {
   int n;
   scanf("%d" , &n);

   int arr[100];
   for(int i = 0; i < n; i++){
    scanf("%d" , &arr[i]);
   }

    // Bubble Sort to sort the array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

 
    int largest = arr[n - 1];
    int secondLargest = -1;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {  
            secondLargest = arr[i];
            break;
        }
    }

    if (secondLargest == -1) {
        printf("-1");
    } else {
        printf("%d\n", secondLargest);
    }

    return 0;
}
