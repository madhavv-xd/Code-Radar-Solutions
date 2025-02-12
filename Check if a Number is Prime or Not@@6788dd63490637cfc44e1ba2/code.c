#include <stdio.h>
int main(){
    int a , cnt;
    scanf("%d" , &a);
    if(a <= 1){
        printf("Not Prime");
    }
    else { 
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }
        if (cnt > 0)
            printf("%d Not Prime", n);
        else
            printf("%d Prime", n);
    }
    return 0;
}