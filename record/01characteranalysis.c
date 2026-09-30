/*
Name: Saviyo Thomas
Roll No: CS11
Date: 01-07-2026

Experiment No: 1

Heading: Character Analysis using Switch Statement

Aim: Write a program to develop a simple text analysis tool that takes an input string and categorizes each character as a vowel, consonant, or other (special character, number, etc.) using a switch statement.

********Algorithm***********
1. Read input string using fgets.
2. For each character until '\0' or newline check its type.
3. If alphabet convert to lowercase and use switch for a, e, i, o, u to print vowel else consonant.
4. Else if digit print digit else print other character.
*/

/* ************SOURCE CODE************ */
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
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 01characteranalysis.c -o 01characteranalysis
CS2024PG01@csserver:~/lablist$ ./01characteranalysis

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
