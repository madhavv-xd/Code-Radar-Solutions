#include <stdio.h>
int main(){
    int a ;
    scanf("%d " , &a );
    printf((a == 1) ? "Monday" : (a == 2) ? "Tuesday" : (a == 3) ? "Wednesday" : (a == 4) ? "Thursday" : (a == 5) ? "Friday" : (a == 6) ? "Sunday" : "Invalid");
    return 0;
}