#include <stdio.h>
int main(){
    int a , b , c;
    scanf("%d %d %d" , &a  , &b , &c);
    printf((a == b == c) ? "Equilateral" : (a == b != c) || (a == c != b) ? "Isosceles" : "Scalene" );
    return 0;
}