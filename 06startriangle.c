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
