/*
Name: Saviyo Thomas
Roll No: CS12
Date: 26/09/2026
AIM: Write a program that reverses the words of a sentence, using recursion. This could be applied in a speech-to-text application where the order of words needs to be reversed for analysis.
ALGORITHM:
Step 1: Start
Step 2: Read a sentence and remove trailing newline
Step 3: Call reversewords with start index of first word
Step 4: In reversewords find end of current word at space or '\0', recurse on next word first, then print current word followed by space
Step 5: Stop
*/
#include <stdio.h>
#include <string.h>

void reversewords(char str[], int start, int end) {
    int i;
    if (str[start] == '\0') {
        return;
    }
    for (i = start; str[i] != ' ' && str[i] != '\0'; i++);
    if (str[i] == ' ') {
        reversewords(str, i + 1, end);
    }
    for (int j = start; j < i; j++) {
        printf("%c", str[j]);
    }
    if (start != 0) {
        printf(" ");
    }
}

int main() {
    char str[100];
    printf("enter a sentence:");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    printf("reversed word order:");
    reversewords(str, 0, 0);
    printf("\n");
    return 0;
}

/*
Input:
when i grow up i wanna be like wiz khaleefa
Output:
enter a sentence:reversed word order:khaleefa wiz like be wanna i up grow i when
*/
