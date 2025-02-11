#include <stdio.h>

int main() {
    int a;
    scanf("%d %d", &a);
    printf((a & 1)? "Set" : "Not Set");
    return 0;
}
