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
            printf("%d Not Prime", a);
        else
            printf("%d Prime", a);
    }
    return 0;
}
