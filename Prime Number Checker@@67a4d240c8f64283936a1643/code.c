int isPrime(int n){
    int cnt = 0;
    if (n <= 1){
        return 0;
    }
    for(int i = 2; i*i < n; i++){
        if(n % 1 == 0){
            cnt++;
        }
    }

    if(cnt > 0){
        return 0;
    }
    return 1;
}