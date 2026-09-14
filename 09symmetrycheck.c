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
Enter elements separated by space:
1  2  3  4  5
2  6  7  8  9
3  7 10 11 12
4  8 11 13 14
5  9 12 14 15

The matrix is symmetric
*/