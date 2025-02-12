#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf((a >= 90) ? 'A': (a >= 80 && a < 90) ? 'B' : (a>=70 && a<80) ? 'C' : (a >=60 && a < 70) ? 'D' : (a < 60) ? 'F');
    return 0;
}
