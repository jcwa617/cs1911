//Convert lower case to upper case
//Written on 19/04/2018
//For COMP1911 H11A
#include <stdio.h>

int main (void) {
   
   
   //Declare variable and retrieve first letter
   int letter = getchar();
   
   while (letter != EOF) {
      //Check if letter is lower case
      if (letter >= 'a' && letter <= 'z') {
         //Convert to upper case
         letter = letter - 'a' + 'A';
      }
      
      //Display the letter
      putchar(letter);
      
      //Retrieve the next letter
      letter = getchar();
   }

   return 0;
}
