void bubbleSort(int arr[][100] , int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){ //reducing the search space 
            if(strcmp(arr[j] , arr[j+1]) > 0){
                strcpy(temp , arr[j]);
                strcpy(arr[j] , arr[j+1]);
                strcpy(arr[j+1] , temp);
            }
        }
    }
}

void printArray(int arr[][100] , int size){
    for(int i = 0; i < size; i++){
        printf("%s " , arr[i]);
    }
    printf("\n");
}