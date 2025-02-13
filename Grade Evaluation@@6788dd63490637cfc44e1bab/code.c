#include <stdio.h>

void evaluateGrade(char grade);

int main() {
    char grade;
    scanf(" %c", &grade);
    evaluateGrade(grade);
    return 0;
}

void evaluateGrade(char grade) {
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }
}
