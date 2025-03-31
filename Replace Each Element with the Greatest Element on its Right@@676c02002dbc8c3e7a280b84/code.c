int arr[100];
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
   
}
arr[n - 1] = -1;

for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
printf("\n");

return 0;