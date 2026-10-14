/*
Name: Saviyo Thomas
Roll No: CS11
Date: 05/10/2026

Experiment No:20

Heading: File merging

Aim: Create a program that merges the contents of two or more text files into a single file. This could be applied in scenarios such as aggregating log files or combining reports for analysis.

*********Algorithm*********
1. Read number of input files to merge and get output file name.
2. Open output file in write mode.
3. Loop through each input file name:
        a. Open input file in read mode.
        b. Read characters from input file and write them to output file.
        c. Close input file.
4. Close output file and display success message.

***************SOURCE CODE*************** */
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
*********OUTPUT*********
CS2024PG01@csserver:~/pg2026/apm/lablist-apm$ cat file1.txt
This a real file that contains text

CS2024PG01@csserver:~/pg2026/apm/lablist-apm$ cat file2.txt
la si sihTways the starting file.
CS2024PG01@csserver:~/pg2026/apm/lablist-apm$ ./a.out
Enter number of files to merge: 2
Enter output aggregated filename: file3.txt
Enter source file 1 name: file1.txt
Enter source file 2 name: file2.txt
Successfully merged 2 files into 'file3.txt'.
CS2024PG01@csserver:~/pg2026/apm/lablist-apm$ cat file3.txt

--- Start of File: file1.txt ---
This a real file that contains text


--- End of File: file1.txt ---

--- Start of File: file2.txt ---
la si sihTways the starting file.

--- End of File: file2.txt ---
*/
