/*
Name: Saviyo Thomas
Roll No: CS11
Date: 06-08-2026

Experiment No: 4

Heading: Palindrome Check for Product Codes

Aim: Write a program to check if a given set of product codes (stored as strings in a database) are palindromes, and generate a report of the results.

********Algorithm***********
1. Read 4 strings with fgets and strip newline.
2. For each string call ispal with l=0 and r=len-1.
3. While r>l compare str[l] and str[r], return 0 on mismatch else l++ and r--.
4. If return is 1 print palindrome else print not palindrome.
*/
/* ************SOURCE CODE************ */
#include<stdio.h>
#include<string.h>
#define s 4

void pal(){

}

int ispal (char str[]){
  int l=0,r=strlen(str)-1;
  while(r>l){
    if(str[l]!=str[r]){return 0;}
    r--; l++;
  }
  return 1;
}

int main(){
  
  char str[s][11];
  printf("\n Enter Strings\n");
  for(int i=0;i<s;i++){
    fgets(str[i],11, stdin);
    str[i][strcspn(str[i], "\n")]=0;
  }

  for(int i=0;i<s;i++){
    if(ispal(str[i])){printf("\n%s is palindrome",str[i]);}
    else{printf("\n%s is not a palindrome",str[i]);}
  }
  return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 04palcheck.c -o 04palcheck
CS2024PG01@csserver:~/lablist$ ./04palcheck

 Enter Strings

asdfdafg is not a palindrome
asdffdsa is palindrome
xcbvfg is not a palindrome
malayalam is palindrome
*/
