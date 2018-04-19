//Remove empty lines
//Written on 19/04/2018
//For COMP1911 H11A
#include <stdio.h>
#define MAX_LINE 4096

int main (void) {
   //Declare variables
   char line[MAX_LINE];
   int count = 0;
   int whiteSpace = 0;
   int wholeWords = 0;
   int shortestWordLength = 0;
   int longestWordLength = 0;
   //Retrieve line
   while (fgets(line, MAX_LINE, stdin) != EOF) {
      count = 0;
      
      int nonWhiteSpace = 0;
      
      //While there is not end of file
      while (line[count] != '\0') {
         
         //Check if white space
         if (line[count] != ' ' && line[count] != '\t' && line[count] != '\n') {
            if (nonWhiteSpace > 0) {
               if (wholeWords == 0) {
                  shortestWordLength = nonWhiteSpace;
                  longestWordLength = nonWhiteSpace;
               } else if (nonWhiteSpace < shortestWordLength) {
                  shortestWordLength = nonWhiteSpace;
               } else if (nonWhiteSpace > longestWordLength) {
                  longestWordLength = nonWhiteSpace;
               }
               wholeWords = wholeWords + 1;
            }
            whiteSpace = whiteSpace + 1;
         } else {
            nonWhiteSpace = nonWhiteSpace + 1;
         }
         
         
         //Increment counter
         count = count + 1;
      }
     
      printf("Input contains %d blanks, tabs and new lines\n", whiteSpace);
      printf("Number of words: %d\n", wholeWords);
      printf("Length of shortest word: %d\n", shortestWordLength);
      printf("Length of longest word: %d\n", longestWordLength);
   }

   return 0;
}
