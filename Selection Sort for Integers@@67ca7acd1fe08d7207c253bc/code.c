int selectionSort(int arr[] , int n){
    for(int i = 0;  i < n - 1; i++){
        int min = i;
        for(int j = i+1; j < n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        arr[i] = arr[i] ^ arr[min];
        arr[min] = arr[i] ^ arr[min];
        arr[i] = arr[i] ^ arr[min];
    }
}