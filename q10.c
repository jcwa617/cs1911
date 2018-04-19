//Reverse lines
//Written on 19/04/2018
//For COMP1911 H11A
#include <stdio.h>
#define MAX_LINE 4096

int main (void) {
   //Declare variables
   char line[MAX_LINE];
   int count;
   
   //Retrieve line
   while (fgets(line, MAX_LINE, stdin) != EOF) {
      count = 0;
      //While there is not a new line or end of file
      while (line[count] != '\n' && line[count] != '\0') {
         //Increment counter
         count = count + 1;
      }
      
      count = count - 1;
      
      while (count >= 0) {
         printf("%c", );
         count = count - 1;
      }
      
      printf("\n");
   }

   return 0;
}
