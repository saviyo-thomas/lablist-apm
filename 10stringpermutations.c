#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char *str, int start, int end) {
    int i;
    if (start == end) {
        // Base case: if start equals end, a permutation is complete
        printf("%s\n", str);
    } else {
        // Recursive case: iterate through characters from start to end
        for (i = start; i <= end; i++) {
            // Swap current character with the character at 'start'
            swap((str + start), (str + i));
            // Recursively call permute for the next position
            permute(str, start + 1, end);
            // Backtrack: swap back to restore the original string
            // This is crucial to get all permutations without duplicates
            swap((str + start), (str + i));
        }
    }
}

int main() {
    char str[100]; // Assume max string length of 99 characters + null terminator

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("\nPermutations of '%s':\n", str);
    permute(str, 0, n - 1);

    return 0;
}
