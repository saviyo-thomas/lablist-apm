/*
Name: Saviyo Thomas
Roll No: CS11
Date: 03-08-2026

Experiment No: 6

Heading: Dynamic Data Display Pascals Triangle and Patterns
:
Aim: Develop an application that displays Pascal's Triangle dynamically based on user input for the number of rows. Also, create a pattern generator that can be customized with user input.

********Algorithm***********
1. Start the program and read the number of rows.
2. Generate Pascal's Triangle:
   - Loop through each row, print leading spaces, and calculate/print values using the combination formula.
3. Generate Z-Pattern:
   - Loop through rows to print the top and bottom horizontal lines of asterisks.
   - Print the diagonal asterisks with appropriate padding for intermediate rows.
4. Stop the program.
*/

/* ************SOURCE CODE************ */

#include <stdio.h>

void padding(int r) {
    for (int i = 0; i < r; i++)
        printf(" ");
}

void zpattern(int rno) {
    for (int a = 0; a < rno; a++) {
        padding(rno / 2);
        if (a == 0 || a == rno - 1) {
            for (int b = 0; b < rno; b++) {
                printf("* ");
            }
        } else {
            for (int c = rno; c > a + 1; c--) {
                printf("  ");
            }
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows, space, p;
    printf("Enter no. of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    // Pascal's Triangle
    for (int i = 0; i < rows; i++) {
        for (space = 0; space <= rows - i; space++) {
            printf(" ");
        }
        
        for (int a = 0; a <= i; a++) {
            if (a == 0 || i == 0) 
                p = 1;
            else 
                p = p * (i - a + 1) / a;
            
            printf("%d ", p);
        }
        printf("\n");
    }

    printf("\n");
    zpattern(rows);
    
    return 0;
}
/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 06pattern.c -o 06pattern
CS2024PG01@csserver:~/lablist$ ./06pattern

Enter no. of rows: 5
      1 
     1 1 
    1 2 1 
   1 3 3 1 
  1 4 6 4 1 

  * * * * * 
        *
      *
    *
  * * * * * 

*/
