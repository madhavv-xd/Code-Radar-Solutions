#include <stdio.h>

int main(){
    int a, cnt = 0;
    scanf("%d", &a);
    if (a <= 1) {
        printf("Not Prime");
    } else {
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0)
                cnt++;
        }
        if (cnt > 0)
            printf("Not Prime");
        else
            printf("Prime");
    }
    return 0;
}
