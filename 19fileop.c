/*
Name: Saviyo Thomas
Roll No: CS11
Date: 04/10/2026

Heading: File utility program

Aim: Write a utility that performs various file operations such as opening, reading, writing, appending, and closing files. This tool could be used to automate file handling in administrative tasks.
**********ALGORITHM*********
1. Display interactive menu for file operations: 1. Create/Write 2. Read 3. Append 4. Exit
2. Read choice and filename.
3. Perform corresponding file stream operation (fopen with "w", "r", or "a", followed by appropriate I/O functions).
4. Safely close file stream and repeat menu.
5. On exit choice, terminate program.

*************SOURCE CODE************* */
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
**********OUTPUT*********
CS2024PG01@csserver:~/pg2026/apm/lablist-apm$ ./a.out

=== File Operations Utility ===
1. Write to File (New/Overwrite)
2. Read File
3. Append to File
4. Exit
Enter your choice: 1
Enter filename to write: file1.txt
Enter text to write (type 'STOP' on a new line to finish):
This has never been the plan to stop
never have i ever thought i would be here
STOP
File written successfully.

=== File Operations Utility ===
1. Write to File (New/Overwrite)
2. Read File
3. Append to File
4. Exit
Enter your choice: 2
Enter filename to read: file1.txt

--- Contents of 'file1.txt' ---
This has never been the plan to stop
never have i ever thought i would be here

---------------------------

=== File Operations Utility ===
1. Write to File (New/Overwrite)
2. Read File
3. Append to File
4. Exit
Enter your choice: 3
Enter filename to append: file1.txt
Enter text to append (type 'STOP' on a new line to finish):
the append is appending
STOP
Data appended successfully.

=== File Operations Utility ===
1. Write to File (New/Overwrite)
2. Read File
3. Append to File
4. Exit
Enter your choice: 2
Enter filename to read: file1.txt

--- Contents of 'file1.txt' ---
This has never been the plan to stop
never have i ever thought i would be here
the append is appending

---------------------------

=== File Operations Utility ===
1. Write to File (New/Overwrite)
2. Read File
3. Append to File
4. Exit
Enter your choice: 4
Exiting File Operations Utility.

*/
