//Count numbers in input
//Written on 19/04/2018
//For COMP1911 H11A
#include <stdio.h>

int main (void) {
   //Declare variables and retrieve first character
   int character = getchar();
   int count = 0;
   int sum = 0;
   
   while (character != EOF) {
      //Check if character is a number
      if (character >= '0' && character <= '9') {
         //Increment counter
         count = count + 1;
         
         //Add to sum
         sum = character + sum;
      }
      
      //Retrieve the next letter
      character = getchar();
   }

   printf("Input contained %d digits which summed to %d\n", count, sum);

   return 0;
}
