void isPrime(int n){
    int cnt = 0;
    if (n <= 1){
        printf("%d" , 0);
    }
    else{
    for(int i = 2; i*i <= n; i++){
        if(n % 1 == 0){
            cnt++;
        }
    }

    if(cnt > 0){
        printf("%d" , 0);
    }
    else{
        printf("%d" , 1);
    }
    }
}