// Description: Prompts the user for a strictly positive number N
//              and outputs an equilateral triangle of height N.
//              The top of the triangle (line 1) is labeled with the letter A.
//              For all nonzero p < N, line p + 1 of the triangle is labeled
//              with letters that go up in alphabetical order modulo 26
//              from the beginning of the line to the middle of the line,
//              starting wth the letter that comes next in alphabetical order
//              modulo 26 to the letter in the middle of line p,
//              and then down in alphabetical order modulo 26
//              from the middle of the line to the end of the line.
//
// Written by Eric Martin for COMP9021
// modified by Andrew Taylor for 1911

#include <stdio.h>

int main(void) {
    int ch, i, j, k;
    int height = 0;


    printf("Enter height: ");
    scanf("%d", &height);

    ch = 'A';
    i = 1;
    while (i <= height) {

        /* Displays spaces on the left */
        j = 0;
        while (j < height - i) {
            printf(" ");
            j = j + 1;
        }

        /* Displays letters before middle column */
        k = 1;
        while (k < i) {
            putchar(ch);

            /* code of next letter */
            ch = (ch - 'A' + 1) % 26 + 'A';
            k = k + 1;
        }

        /* Displays middle column */
        putchar(ch);

        /* Displays letters after middle column */
        k = 1;
        while (k < i) {

            /* Code of previous letter */
            ch = (ch - 'A' + 25) % 26 + 'A';
            putchar(ch);
            k = k + 1;
        }
        printf("\n");

        /* Code of first letter to be input on next line */
        ch = ((1 + i) * i / 2) % 26 + 'A';
        i = i + 1;
    }

    return 0;
}
