/*
Name: Saviyo Thomas
Roll No: CS11
Date: 23-07-2026

Experiment No: 5

Heading: Duplicate Removal from Email List

Aim: Create a program that takes a list of customer email addresses (stored in an array) and removes any duplicates, ensuring that each email address is only represented once.

********Algorithm***********
1. Read limit lim and read lim email strings, strip newline.
2. For each i skip if blank, compare with each j=i+1 using strcmp.
3. If equal mark duplicate by setting cmail[j][0]='\0'.
4. Display all non-blank emails.
*/
/* ************SOURCE CODE************ */
#include <stdio.h>
#include <string.h>
#define LIM 50

char cmail[LIM][50];

void check(int s) {
  for (int i = 0; i < s; i++) {

    if (cmail[i][0] == '\0') continue; 
    
    for (int j = i + 1; j < s; j++) {
      if (strcmp(cmail[i], cmail[j]) == 0) {
       
        cmail[j][0] = '\0'; 
}}}}

int main() {
  int lim;
  
  printf("\n(Max limit=%d)\nEnter number of emails: ", LIM);
  if (scanf("%d", &lim) != 1 || lim > LIM || lim <= 0) {
      return 1;
  }
  getchar();   
  for (int i = 0; i < lim; i++) {
    if (fgets(cmail[i], 50, stdin) != NULL) {
      cmail[i][strcspn(cmail[i], "\n")] = '\0';
    }
  }
  
  check(lim);
  
  printf("\nUnique Emails:\n");
  for (int i = 0; i < lim; i++) {
    if (cmail[i][0] != '\0') {
      printf("%s\n", cmail[i]);
    }
  }
  
  return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 05dclean.c -o 05dclean
CS2024PG01@csserver:~/lablist$ ./05dclean

(Max limit=50)
Enter number of emails: 
Unique Emails:
saviyothomas@gmail.com
sfg@yahoo.in
adgad@prot.cm
*/
