int selectionSort(auto arr[] , int n){
    for(int i = 0;  i < n - 1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int printArray(int arr[] , int n){
    for(int i = 0; i < n; i++){
        printf("%d " , arr[i]);
    }
}