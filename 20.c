/*
Name: Saviyo Thomas
Roll No: CS12
Date: 05/10/2026
AIM: Create a program that merges the contents of two or more text files into a single file. This could be applied in scenarios such as aggregating log files or combining reports for analysis.
ALGORITHM:
Step 1: Start
Step 2: Read number of input files to merge and get output file name.
Step 3: Open output file in write mode.
Step 4: Loop through each input file name:
        a. Open input file in read mode.
        b. Read characters from input file and write them to output file.
        c. Close input file.
Step 5: Close output file and display success message.
Step 6: Stop
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_files;
    char out_filename[100];

    printf("Enter number of files to merge: ");
    scanf("%d", &num_files);

    if (num_files <= 1) {
        printf("Error: Need at least 2 files to merge.\n");
        return 1;
    }

    printf("Enter output aggregated filename: ");
    scanf("%99s", out_filename);

    FILE *dest = fopen(out_filename, "w");
    if (dest == NULL) {
        perror("Error opening output file");
        return 1;
    }

    char src_filename[100];
    for (int i = 0; i < num_files; i++) {
        printf("Enter source file %d name: ", i + 1);
        scanf("%99s", src_filename);

        FILE *src = fopen(src_filename, "r");
        if (src == NULL) {
            perror("Warning: Could not open source file. Skipping");
            continue;
        }

        // Write a header separator for clarity in aggregated log/reports
        fprintf(dest, "\n--- Start of File: %s ---\n", src_filename);

        int ch;
        while ((ch = fgetc(src)) != EOF) {
            fputc(ch, dest);
        }

        fprintf(dest, "\n--- End of File: %s ---\n", src_filename);
        fclose(src);
    }

    fclose(dest);
    printf("Successfully merged %d files into '%s'.\n", num_files, out_filename);

    return 0;
}

/*
Input:
Number of files: 2
Output filename: combined_log.txt
File 1 name: log1.txt (contains "System started.")
File 2 name: log2.txt (contains "Backup completed.")
Output:
Successfully merged 2 files into 'combined_log.txt'.
*/
