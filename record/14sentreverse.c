/*
Name: Saviyo Thomas
Roll No: CS11
Date: 26-09-2026

Experiment No: 14

Heading: Sentence Word Reverse using Recursion

Aim: Write a program that reverses the words of a sentence, using recursion. This could be applied in a speech-to-text application where the order of words needs to be reversed for analysis.

********Algorithm***********
1. Read sentence with fgets and remove newline.
2. Call reversewords with start index of first word.
3. Find end of current word at space or '\0', recurse on next word first, then print current word followed by space.
*/
/* ************SOURCE CODE************ */
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
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 14sentreverse.c -o 14sentreverse
CS2024PG01@csserver:~/lablist$ ./14sentreverse
enter a sentence:when i gro up i wanna be like wiz Khalifa
reversed word order:Khalifa wiz like be wanna i up gro i when
*/
