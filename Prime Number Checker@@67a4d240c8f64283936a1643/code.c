void isPrime(int num){
    int cnt = 0;
    if (num <= 1){
        printf("%d" , 0);
    }
    else{
    for(int i = 2; i*i <= num; i++){
        if(num % 1 == 0){
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