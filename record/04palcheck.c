/*
Name: Saviyo Thomas
Roll No: CS11
Date: 06/08/2026
AIM: Write a program to check if a given set of product codes (stored as strings in a database) are palindromes, and generate a report of the results.
ALGORITHM:
Step 1: Start
Step 2: Read a set of strings and remove trailing newline
Step 3: For each string call ispal function
Step 4: In ispal set l=0 and r=len-1, while r>l compare str[l] and str[r], if unequal return 0 else l++ and r--
Step 5: If ispal returns 1 display string is palindrome else display not a palindrome
Step 6: Stop
*/
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
Input:
asdfdafg
asdffdsa
xcbvfg
malayalam
Output:

 Enter Strings

asdfdafg is not a palindrome
asdffdsa is palindrome
xcbvfg is not a palindrome
malayalam is palindrome
*/
