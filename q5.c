//Encrypt message
//Written on 19/04/2018
//For COMP1911 H11A
#include <stdio.h>

int main (void) {
   //Declare variable and retrieve first character
   int character = getchar();
   while (character != EOF) {
      //Check if character is a letter
      if (character >= 'a' && character <= 'z' || 
         character >= 'A' && character <= 'Z') {
         //Shift up by one position
         //Need special condition if letter is 'Z' or 'z'
         if (character == 'Z') {
            character = 'A';
         } else if (character == 'z') {
            character = 'a';
         } else {
            character = character + 1;
         }
      }
      //Display the letter
      putchar(character);
      
      //Retrieve the next letter
      character = getchar();
   }

   return 0;
}
