/*
Name: Saviyo Thomas
Roll No: CS11
Date: 02/10/2026

Experiment No:17

Heading: File copying using command line arguments

Aim: Write a program that copies the contents of one file into another, using command-line arguments for file names. This utility could be used for backup or migration tasks in system administration.
*******Algorithm*******
1. Check if correct number of command-line arguments (source and destination) are provided.
2. Open source file in read mode and destination file in write mode.
3. Check if files opened successfully; handle errors if any.
4. Read characters from source file and write them to destination file until EOF.
5. Close both files and display success message.

**************SOURCE CODE**************
Program to copy files*/
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
**************OUTPUT************** 
CS2024PG01@csserver:~/pg2026/apm/lablist-apm$ cat file1.txt file2.txt
This is always the starting file.
This is  always the second file.
CS2024PG01@csserver:~/pg2026/apm/lablist-apm$ ./a.out file1.txt file2.txt
File data successfully transferred from 'file1.txt' to 'file2.txt'.
*/
