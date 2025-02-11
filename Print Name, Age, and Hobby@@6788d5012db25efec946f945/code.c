#include <stdio.h>
int main(){
    char s[100];
    int age;
    char hob[100];
    scanf("%c %d %c" , &s , &age , &hob);
    printf("Name: %c\n" , s);
    printf("Age: %d\n" , age);
    printf("Hobby: %c\n" , hob);
    return 0;
}