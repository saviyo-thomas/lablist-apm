/*
Name: Saviyo Thomas
Roll No: CS12
Date: 23/07/2026
AIM: Create a program that takes a list of customer email addresses (stored in an array) and removes any duplicates, ensuring that each email address is only represented once.
ALGORITHM:
Step 1: Start
Step 2: Read number of emails lim and read lim email strings, remove trailing newline
Step 3: For each i from 0 to s-1 skip if already blank, compare with each j=i+1 to s-1 using strcmp
Step 4: If cmail[i] equals cmail[j] mark cmail[j] as blank by setting first character to '\0'
Step 5: Display all non-blank email addresses as unique emails
Step 6: Stop
*/
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
Input:
5
saviyothomas@gmail.com
sfg@yahoo.in
saviyothomas@gmail.com
sfg@yahoo.in
adgad@prot.cm
Output:

(Max limit=50)
Enter number of emails: 
Unique Emails:
saviyothomas@gmail.com
sfg@yahoo.in
adgad@prot.cm
*/
