//Remove empty lines
//Written on 19/04/2018
//For COMP1911 H11A
#include <stdio.h>
#define MAX_LINE 4096

int main (void) {
   //Declare variables
   char line[MAX_LINE];
   int count;
   int nonWhiteSpace;
   
   //Retrieve line
   while (fgets(line, MAX_LINE, stdin) != EOF) {
      count = 0;
      nonWhiteSpace = 0;
      //While there is not end of file
      while (line[count] != '\0') {
      /*
         //Check if white space
         if (line[count] != ' ' && line[count] != '\t' && line[count] != '\n') {
            nonWhiteSpace = nonWhiteSpace + 1;
         }
      */
         if (count > 0 && line[count] == '\' && line[count-1] == '\') {
            line[count-1] = '\0';
            break;
         }
         //Increment counter
         count = count + 1;
      }
     
      //if (nonWhiteSpaceCount > 0) {
         printf("%s", line);
      //}
   }

   return 0;
}
