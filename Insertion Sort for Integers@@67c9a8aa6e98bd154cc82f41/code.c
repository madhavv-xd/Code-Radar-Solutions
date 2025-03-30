void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {  // Start from the second element
        int j = i;
        // Move elements of arr[0..i-1] that are greater than arr[i] to one position ahead
        while (j > 0 && arr[j - 1] > arr[j]) {
            // XOR Swap
            arr[j - 1] = arr[j - 1] ^ arr[j];
            arr[j] = arr[j - 1] ^ arr[j];
            arr[j - 1] = arr[j - 1] ^ arr[j];
            j--;
        }
    }
}