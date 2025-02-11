#include <stdio.h>
int main(){
    char s[100];
    int age;
    char hob[100];
    scanf("%s %d %s" , &s , &age , &hob);
    printf("Name: %s\n" , s);
    printf("Age: %d\n" , age);
    printf("Hobby: %s\n" , hob);
    return 0;
}