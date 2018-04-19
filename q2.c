//Integer Counter
//Code written 19/04/2018
//For COMP1911 H11A
#include <stdio.h>

#define LARGEST_INTEGER 99

int main (void) {

   int n;
   int count[LARGEST_INTEGER+1] = {0};
   printf("Enter a number: ");   
   while (scanf("%d", &n) == 1) {
      if (n < 0 || n > LARGEST_INTEGER) {
         printf("Try again: number has to be between 0 and 99 inclusive\n");
      } else {
         count[n] = count[n] + 1;
         printf("You have entered %d %d times\n", n, count[n]);
      }
      
      printf("Enter a number: ");
   }

   return 0;
}
