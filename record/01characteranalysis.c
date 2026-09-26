/*
Name: Saviyo Thomas
Roll No: CS11
Date: 01/07/2026
AIM: Write a program to develop a simple text analysis tool that takes an input string and categorizes each character as a vowel, consonant, or other (special character, number, etc.) using a switch statement.
ALGORITHM:
Step 1: Start
Step 2: Read an input string using fgets
Step 3: For each character until '\0' or '\n' repeat Steps 4-6
Step 4: If character is an alphabet, convert to lowercase and use switch to check a, e, i, o, u for vowel else consonant
Step 5: Else if character is a digit, classify as digit
Step 6: Else classify as other character
Step 7: Display the category of each character
Step 8: Stop
*/
// program to categorize a string characters into vowels, consonants, special characters and numbers

#include<stdio.h>
#include<ctype.h>

int main(){
  char ips[20];
  int i=0;
  printf("\nEnter the input string:");
  fgets(ips, 20, stdin);
  while(ips[i]!='\0' && ips[i]!='\n'){
 
    char c = tolower(ips[i]);
    if(isalpha(c)){
      int isv;
      switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          printf("\n%c - vowel", ips[i]);
          break;
        default:
          printf("\n%c - consonant",ips[i]);
      }
    }
    else if (isdigit(ips[i])){
        printf("\n %c - digit",ips[i]);
    }
    else printf("\n %c - other character.\n", ips[i]);
    i++;
  }
  printf("\n");
  return 0;
}

/*
Input:
qwert123!@gd
Output:

Enter the input string:
q - consonant
w - consonant
e - vowel
r - consonant
t - consonant
 1 - digit
 2 - digit
 3 - digit
 ! - other character.

 @ - other character.

g - consonant
d - consonant
*/
