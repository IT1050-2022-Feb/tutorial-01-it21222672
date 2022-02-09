/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1 , mark2;
   float ave;
   printf("enter mark1");
   scanf("%d" ,&mark1);
   printf("enter mark2");
   scanf("%d" ,&mark2);
   
   
   ave = (mark1 + mark2)/2;
   printf("%f" ,ave);
  
  return 0;
}

