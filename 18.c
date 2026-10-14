/*
Name: Saviyo Thomas
Roll No: CS12
Date: 03/10/2026
AIM: Develop a program that takes a text file, reverses the content of the first 'n' characters, and writes the result to another file. This could be useful for data manipulation or encryption tasks.
ALGORITHM:
Step 1: Start
Step 2: Accept input file name, output file name, and number of characters 'n' from user.
Step 3: Open input file in read mode and output file in write mode.
Step 4: Read the first 'n' characters into a dynamic buffer and track actual characters read.
Step 5: Reverse the string in the buffer using a two-pointer approach.
Step 6: Write the reversed buffer to the output file, then copy the remaining content as-is.
Step 7: Close files and display success message.
Step 8: Stop
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char src_file[100], dest_file[100];
    int n;

    printf("Enter source file name: ");
    scanf("%99s", src_file);
    printf("Enter destination file name: ");
    scanf("%99s", dest_file);
    printf("Enter number of characters to reverse (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: 'n' must be greater than 0.\n");
        return 1;
    }

    FILE *src = fopen(src_file, "r");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dest = fopen(dest_file, "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    char *buffer = (char *)malloc(n + 1);
    if (buffer == NULL) {
        perror("Memory allocation failed");
        fclose(src);
        fclose(dest);
        return 1;
    }

    int read_count = 0;
    for (int i = 0; i < n; i++) {
        int ch = fgetc(src);
        if (ch == EOF) break;
        buffer[read_count++] = (char)ch;
    }
    buffer[read_count] = '\0';

    // Reverse the first read_count characters
    for (int i = 0; i < read_count / 2; i++) {
        char temp = buffer[i];
        buffer[i] = buffer[read_count - 1 - i];
        buffer[read_count - 1 - i] = temp;
    }

    // Write reversed prefix
    fputs(buffer, dest);

    // Copy remaining characters
    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("Successfully reversed first %d characters and written to '%s'.\n", read_count, dest_file);

    free(buffer);
    fclose(src);
    fclose(dest);

    return 0;
}

/*
Input:
Source file: input.txt (contains "ABCDEFGHIJK")
Destination file: output.txt
n: 5
Output:
Enter source file name: Enter destination file name: Enter number of characters to reverse (n): Successfully reversed first 5 characters and written to 'output.txt'.
*/
