#include <stdio.h>

void decimalToBinary(unsigned int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    
    int binary[32];  
    int index = 0;
    while (num > 0) {
        binary[index++] = num % 2;  
        num /= 2;  
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    decimalToBinary(num);
    printf("\n");
    return 0;
}
