/*
Name: Saviyo Thomas
Roll No: CS12
Date: 22/08/2026
AIM: Develop an application that displays Pascal's Triangle dynamically based on user input for the number of rows. Also, create a pattern generator (e.g., number or star pattern) that can be customized with user input.
ALGORITHM:
Step 1: Start
Step 2: Read number of rows
Step 3: For i=0 to rows-1 repeat Steps 4-5
Step 4: Print rows-i spaces, then for a=0 to i print "* "
Step 5: Print newline
Step 6: Stop
*/
#include <stdio.h>

int main() {
    int rows, space, p;

    printf("Enter no. of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Space condition needs to depend on 'i' to form a triangle
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (int a = 0; a <= i; a++) {
/*            if (a == 0 || i == 0) {
                p = 1;
            } else {
                p = p * (i - a + 1) / a; 
            }
  */          printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
Input:
7
Output:
Enter no. of rows:        * 
      * * 
     * * * 
    * * * * 
   * * * * * 
  * * * * * * 
 * * * * * * *
*/
