#include <stdio.h>
int main(){
    int a , b;
    scanf("%d %d" , &a  , &b);
    printf((a > b) ? "Loss" : (a < b) ? "Profit" : "No Profit No Loss");
    return 0;
}