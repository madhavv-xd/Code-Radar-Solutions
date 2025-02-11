#include <stdio.h>
int main(){
    float a;
    scanf("%f" , &a);
    float area = (float)(3.14 * a * a);
    printf("Area: %.2f" , area);
    return 0;
}