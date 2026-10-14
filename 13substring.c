/*
Name: Saviyo Thomas
Roll No: CS11
Date: 06/10/2026

Experiment No: 13

Heading: Substring insertion

Aim: Create a text editor program that allows a user to insert a given substring at a specified position within an existing string of text. This tool can help in editing and updating documents or code.
********Algorithm*********
1. Read the main string and the substring to be inserted.
2. Read the specific index position where the insertion should take place.
3. Check if the index is valid (within the bounds of the main string length).
4. Shift characters of the main string from the specified index to the right to accommodate the substring length.
5. Copy the characters of the substring into the main string at the specified index.
6. Display the final modified string and stop.

*************SOURCE CODE************
Program to insert a substring to a string*/
#include <stdio.h>
#include <string.h>

#define MAX_LEN 200

// Helper function to trim trailing newlines from fgets
void trim_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void insert_substring(char *main_str, const char *sub_str, int index) {
    int main_len = strlen(main_str);
    int sub_len = strlen(sub_str);

    if (index < 0 || index > main_len) {printf("Error: Index out of bounds. Valid range is 0 to %d.\n", main_len); return; }

    if (main_len + sub_len >= MAX_LEN) { printf("Error: Resulting string exceeds maximum capacity.\n"); return; }

    for (int i = main_len; i >= index; i--) { main_str[i + sub_len] = main_str[i]; }

    for (int i = 0; i < sub_len; i++) { main_str[index + i] = sub_str[i]; }
}

int main() {
    char main_str[MAX_LEN];
    char sub_str[MAX_LEN];
    int index;

    printf("Text Editor - Substring Insertion Tool\n");
    printf("--------------------------------------\n");

    printf("Enter the base text: ");
    fgets(main_str, sizeof(main_str), stdin);
    trim_newline(main_str);

    printf("Enter the substring to insert: ");
    fgets(sub_str, sizeof(sub_str), stdin);
    trim_newline(sub_str);

    printf("Enter the position index (0 to %lu): ", strlen(main_str));
    scanf("%d", &index);

    printf("\nOriginal Text: %s\n", main_str);

    insert_substring(main_str, sub_str, index);

    printf("Updated Text:  %s\n", main_str);

    return 0;
}

/*
****************OUTPUT****************
CS2024PG01@csserver:~/pg2026/apm/lablist-apm$ ./a.out
Text Editor - Substring Insertion Tool
--------------------------------------
Enter the base text: string is never over
Enter the substring to insert:  ever
Enter the position index (0 to 20): 15

Original Text: string is never over
Updated Text:  string is never ever over
 */
