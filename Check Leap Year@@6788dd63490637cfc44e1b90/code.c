#include <stdio.h>
int main() {
   int year;
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d Leap Year.");
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("Not a Leap Year.");
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d Leap Year.");
   }
   // all other years are not leap years
   else {
      printf("%d Not a Leap Year.");
   }

   return 0;
}