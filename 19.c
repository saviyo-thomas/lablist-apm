/*
Name: Saviyo Thomas
Roll No: CS12
Date: 04/10/2026
AIM: Write a utility that performs various file operations such as opening, reading, writing, appending, and closing files. This tool could be used to automate file handling in administrative tasks.
ALGORITHM:
Step 1: Start
Step 2: Display interactive menu for file operations: 1. Create/Write 2. Read 3. Append 4. Exit
Step 3: Read choice and filename.
Step 4: Perform corresponding file stream operation (fopen with "w", "r", or "a", followed by appropriate I/O functions).
Step 5: Safely close file stream and repeat menu.
Step 6: On exit choice, terminate program.
Step 7: Stop
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void write_file() {
    char filename[100], data[256];
    printf("Enter filename to write: ");
    scanf("%99s", filename);
    clear_buffer();

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }

    printf("Enter text to write (type 'STOP' on a new line to finish):\n");
    while (1) {
        fgets(data, sizeof(data), stdin);
        if (strncmp(data, "STOP", 4) == 0) break;
        fputs(data, fp);
    }

    fclose(fp);
    printf("File written successfully.\n");
}

void read_file() {
    char filename[100];
    printf("Enter filename to read: ");
    scanf("%99s", filename);
    clear_buffer();

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return;
    }

    printf("\n--- Contents of '%s' ---\n", filename);
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n---------------------------\n");

    fclose(fp);
}

void append_file() {
    char filename[100], data[256];
    printf("Enter filename to append: ");
    scanf("%99s", filename);
    clear_buffer();

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file for appending");
        return;
    }

    printf("Enter text to append (type 'STOP' on a new line to finish):\n");
    while (1) {
        fgets(data, sizeof(data), stdin);
        if (strncmp(data, "STOP", 4) == 0) break;
        fputs(data, fp);
    }

    fclose(fp);
    printf("Data appended successfully.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n=== File Operations Utility ===\n");
        printf("1. Write to File (New/Overwrite)\n");
        printf("2. Read File\n");
        printf("3. Append to File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) break;
        clear_buffer();

        switch (choice) {
            case 1:
                write_file();
                break;
            case 2:
                read_file();
                break;
            case 3:
                append_file();
                break;
            case 4:
                printf("Exiting File Operations Utility.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

/*
Input:
1 (Write)
notes.txt
Hello administrative task automation.
STOP
2 (Read)
notes.txt
4 (Exit)
Output:
=== File Operations Utility ===
1. Write to File (New/Overwrite)
2. Read File
3. Append to File
4. Exit
Enter your choice: 
Enter filename to write: Enter text to write (type 'STOP' on a new line to finish):
File written successfully.

=== File Operations Utility ===
1. Write to File (New/Overwrite)
2. Read File
3. Append to File
4. Exit
Enter your choice: 
Enter filename to read: 
--- Contents of 'notes.txt' ---
Hello administrative task automation.

---------------------------

=== File Operations Utility ===
1. Write to File (New/Overwrite)
2. Read File
3. Append to File
4. Exit
Enter your choice: Exiting File Operations Utility.
*/
