/*
Name: Saviyo Thomas
Roll No: CS11
Date: 03-07-2026

Experiment No: 9

Heading: Symmetry Check for Matrix Design

Aim: Develop a program to check if a given design (represented as a matrix) is symmetric. This program can be useful for analyzing symmetry in architectural or geometric design patterns.

********Algorithm***********
1. Read 5x5 matrix elements.
2. For each i and j compare t[i][j] with t[j][i], return 0 on mismatch else 1.
3. If result is 1 display symmetric else display not symmetric.
*/

/* ************SOURCE CODE************ */
//Program to check if given matrix is symmetric or not
#include <stdio.h>
#define m 5

void gtel(int t[m][m]) {
    printf("Enter elements separated by space:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &t[i][j]);
        }
    }
}

int check(int t[m][m]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (t[i][j] != t[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

int main() {
    int a[m][m];
    gtel(a);
    
    if (check(a)) {
        printf("\nThe matrix is symmetric\n");
    } else {
        printf("\nThe matrix is not symmetric\n");
    }
    
    return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 09symmetrycheck.c -o 09symmetrycheck
CS2024PG01@csserver:~/lablist$ ./09symmetrycheck
Enter elements separated by space:
1 1 1 1 1
1 2 2 2 2
1 2 3 3 3
1 2 3 4 4
1 2 3 4 5

The matrix is symmetric

*/
