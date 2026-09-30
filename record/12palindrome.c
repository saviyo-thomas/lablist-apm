/*
Name: Saviyo Thomas
Roll No: CS11
Date: 28-09-2026
 
Experiment No: 12

Heading: Text Reversal Tool for Document Review

Aim: Write a program that checks if a document (string) is a palindrome by reversing it manually without usingbuilt-in functions. This tool could be used for reviewing documents that need to maintain symmetry.

**********ALGORITHM**********
1. Start.
2. Declare character arrays str and rev, and variables i, len, and same.
3. Read the document/string from the user.
4. Find the length of the string manually using a while loop.
5. Reverse the string manually and store it in rev.
6. Add the null character '\0' at the end of the reversed string.
7. Compare the original string with the reversed string character by character.
8. If any character is different, set same = 0.
9. Display the reversed document.
10. If same = 1, display that the document is a palindrome.
11. Otherwise, display that the document is not a palindrome.
12. Stop.

*/

/* **********SOURCE CODE********** */
#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i = 0, len = 0, same = 1;

    printf("Enter a document: ");
    scanf("%s", str);

    // Find length manually 
    while (str[len] != '\0')
        len++;

    // Reverse manually 
    for (i = 0; i < len; i++)
        rev[i] = str[len - i - 1];

    rev[len] = '\0';

    // Compare manually 
    for (i = 0; i < len; i++)
    {
        if (str[i] != rev[i])
        {
            same = 0;
            break;
        }
    }

    printf("Reversed document: %s\n", rev);

    if (same)
        printf("The document is a palindrome.\n");
    else
        printf("The document is not a palindrome.\n");

    return 0;
}

/* **********OUTPUT**********

Enter a document: madam
Reversed document: madam
The document is a palindrome.

*/
