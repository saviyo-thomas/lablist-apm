/*
Name: Saviyo Thomas
Roll No: CS12
Date: 02/10/2026
AIM: Write a program that copies the contents of one file into another, using command-line arguments for file names. This utility could be used for backup or migration tasks in system administration.
ALGORITHM:
Step 1: Start
Step 2: Check if correct number of command-line arguments (source and destination) are provided.
Step 3: Open source file in read mode and destination file in write mode.
Step 4: Check if files opened successfully; handle errors if any.
Step 5: Read characters from source file and write them to destination file until EOF.
Step 6: Close both files and display success message.
Step 7: Stop
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    FILE *source = fopen(argv[1], "r");
    if (source == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dest = fopen(argv[2], "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(source);
        return 1;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File data successfully transferred from '%s' to '%s'.\n", argv[1], argv[2]);

    fclose(source);
    fclose(dest);

    return 0;
}

/*
Input:
Command line: ./file_copy source.txt backup.txt
Contents of source.txt: "System administration backup test."
Output:
File data successfully transferred from 'source.txt' to 'backup.txt'.
*/
