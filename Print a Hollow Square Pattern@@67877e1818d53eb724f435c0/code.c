#include <stdio.h>
int main(){
    int a;
    scanf("%d" , &a);
    for(int i=0; i<a; i++){
        for(int j = 0; j <  a - i + i; j++){
            if(i == j & i < i + 1 & j < j+1){
                print(" ");
            }
            else{
                print("*");
            }
        }
        print("\n");
    }
}