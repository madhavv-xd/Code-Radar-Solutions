#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    if (num == 0) return 32; 
    
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    printf("%d\n", countLeadingZeros(num));
    return 0;
}
