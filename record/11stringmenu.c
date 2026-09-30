/*
Name: Saviyo Thomas
Roll No: CS11
Date: 13-09-2026

Experiment No: 11

Heading: String Utility Suite Concatenation Comparison Conversion

Aim: Create an application that implements a suite of string functions like concatenation, comparison, and conversion (uppercase to lowercase), which can be applied to a list of user-provided strings.

********Algorithm***********
1. Read count and read count strings.
2. Display menu repeatedly for display, concatenate, compare, convert case and exit.
3. Concatenate selected indices, compare with strcmp, convert case with tolower/toupper.
4. Exit on choice 5.
*/

/* ************SOURCE CODE************ */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRINGS 10
#define MAX_LEN 100

void display_strings(char arr[][MAX_LEN], int count) {
    printf("\nCurrent String List:\n");
    for (int i = 0; i < count; i++) {
        printf("[%d] %s\n", i + 1, arr[i]);
    }
}

void concatenate_strings(char arr[][MAX_LEN], int count) {
    if (count < 2) {
        printf("Error: Need at least 2 strings to concatenate.\n");
        return;
    }
    int idx1, idx2;
    printf("Enter index of the first string: ");
    scanf("%d", &idx1);
    printf("Enter index of the second string: ");
    scanf("%d", &idx2);

    if (idx1 < 1 || idx1 > count || idx2 < 1 || idx2 > count) {
        printf("Invalid indices selected.\n");
        return;
    }

    char result[MAX_LEN * 2];
    snprintf(result, sizeof(result), "%s%s", arr[idx1 - 1], arr[idx2 - 1]);
    printf("Result of concatenation: %s\n", result);
}

void compare_strings(char arr[][MAX_LEN], int count) {
    if (count < 2) {
        printf("Error: Need at least 2 strings to compare.\n");
        return;
    }
    int idx1, idx2;
    printf("Enter index of the first string: ");
    scanf("%d", &idx1);
    printf("Enter index of the second string: ");
    scanf("%d", &idx2);

    if (idx1 < 1 || idx1 > count || idx2 < 1 || idx2 > count) {
        printf("Invalid indices selected.\n");
        return;
    }

    int cmp = strcmp(arr[idx1 - 1], arr[idx2 - 1]);
    if (cmp == 0) {
        printf("Result: Strings are identical.\n");
    } else if (cmp < 0) {
        printf("Result: String %d comes before String %d lexicographically.\n", idx1, idx2);
    } else {
        printf("Result: String %d comes after String %d lexicographically.\n", idx1, idx2);
    }
}

void convert_case(char arr[][MAX_LEN], int count) {
    int idx;
    printf("Enter index of the string to convert: ");
    scanf("%d", &idx);

    if (idx < 1 || idx > count) {
        printf("Invalid index selected.\n");
        return;
    }

    int choice;
    printf("1. Convert to Lowercase\n2. Convert to Uppercase\nChoice: ");
    scanf("%d", &choice);

    char temp[MAX_LEN];
    strcpy(temp, arr[idx - 1]);

    for (int i = 0; temp[i] != '\0'; i++) {
        if (choice == 1) {
            temp[i] = tolower(temp[i]);
        } else if (choice == 2) {
            temp[i] = toupper(temp[i]);
        }
    }

    printf("Converted string: %s\n", temp);
}

int main() {
    char strings[MAX_STRINGS][MAX_LEN];
    int count = 0;
    int choice;

    printf("String Utility Suite\n");
    printf("--------------------\n");
    
    printf("Enter the number of strings to input (max %d): ", MAX_STRINGS);
    scanf("%d", &count);
    if (count > MAX_STRINGS || count < 1) {
        printf("Invalid count. Setting default to 3.\n");
        count = 3;
    }

    printf("Enter %d strings:\n", count);
    for (int i = 0; i < count; i++) {
        printf("String %d: ", i + 1);
        scanf("%99s", strings[i]);
    }

    do {
        printf("\n--- Operations Menu ---\n");
        printf("1. Display Strings\n");
        printf("2. Concatenate Two Strings\n");
        printf("3. Compare Two Strings\n");
        printf("4. Convert Case (Upper/Lower)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                display_strings(strings, count);
                break;
            case 2:
                concatenate_strings(strings, count);
                break;
            case 3:
                compare_strings(strings, count);
                break;
            case 4:
                convert_case(strings, count);
                break;
            case 5:
                printf("Exiting application.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 11stringmenu.c -o 11stringmenu
CS2024PG01@csserver:~/lablist$ ./11stringmenu
String Utility Suite
--------------------
Enter the number of strings to input (max 10): 3
Enter 3 strings:
String 1: pablo
String 2: escobar
String 3: gaveria

--- Operations Menu ---
1. Display Strings
2. Concatenate Two Strings
3. Compare Two Strings
4. Convert Case (Upper/Lower)
5. Exit
Enter your choice: 1

Current String List:
[1] pablo
[2] escobar
[3] gaveria

--- Operations Menu ---
1. Display Strings
2. Concatenate Two Strings
3. Compare Two Strings
4. Convert Case (Upper/Lower)
5. Exit
Enter your choice: 2
Enter index of the first string: 1
Enter index of the second string: 3
Result of concatenation: pablogaveria

--- Operations Menu ---
1. Display Strings
2. Concatenate Two Strings
3. Compare Two Strings
4. Convert Case (Upper/Lower)
5. Exit
Enter your choice: 3
Enter index of the first string: 2
Enter index of the second string: 1
Result: String 2 comes before String 1 lexicographically.

--- Operations Menu ---
1. Display Strings
2. Concatenate Two Strings
3. Compare Two Strings
4. Convert Case (Upper/Lower)
5. Exit
Enter your choice: 4
Enter index of the string to convert: 1
1. Convert to Lowercase
2. Convert to Uppercase
Choice: 1
Converted string: pablo

--- Operations Menu ---
1. Display Strings
2. Concatenate Two Strings
3. Compare Two Strings
4. Convert Case (Upper/Lower)
5. Exit
Enter your choice: 4
Enter index of the string to convert: 1
1. Convert to Lowercase
2. Convert to Uppercase
Choice: 2
Converted string: PABLO

--- Operations Menu ---
1. Display Strings
2. Concatenate Two Strings
3. Compare Two Strings
4. Convert Case (Upper/Lower)
5. Exit
Enter your choice: 1

Current String List:
[1] pablo
[2] escobar
[3] gaveria

--- Operations Menu ---
1. Display Strings
2. Concatenate Two Strings
3. Compare Two Strings
4. Convert Case (Upper/Lower)
5. Exit
Enter your choice: 5
Exiting application.
*/
