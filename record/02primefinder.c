/*
Name: Saviyo Thomas
Roll No: CS11
Date: 28/09/2026
AIM: Write a program that scans a list of numbers and identifies which ones are prime. It should store the prime numbers separately for further processing.
ALGORITHM:
Step 1: Start
Step 2: Read number of elements lim and read lim numbers into array inp
Step 3: For each number inp[a] set flag fl=1
Step 4: For b=2 to inp[a]-1, if inp[a]%b==0 set fl=0
Step 5: If fl==1 store inp[a] in prime array op and increment opcount
Step 6: Display all numbers stored in op
Step 7: Stop
*/
//to identufy prime numbers and separate them

#include<stdio.h>

int main(){
  int inp[100], i=0, lim, op[100], opcount=0;
  printf("\nEnter how many numbers to be inserted :");
  scanf("%d", &lim);
 while(i<lim){
    printf("\nEnter numbers: ");
    scanf("%i", &inp[i]);
    i++;
  }
  for(int a=0;a<lim;a++){
    int fl=1;
    for(int b=2;b<inp[a];b++){
      if(inp[a]%b==0){
        fl=0;
      }}
    if(fl==1){
      op[opcount]=inp[a];
      opcount++;
  }}
  i=0;
  printf("\nList of prime numbers ");
  while (i<opcount){
    printf("  %d",op[i]);
    i++;
  }
  printf("\n");
  return 0;
}

/*
Input:
5
12
13
758
2
8651
Output:

Enter how many numbers to be inserted :
Enter numbers: 
Enter numbers: 
Enter numbers: 
Enter numbers: 
Enter numbers: 
List of prime numbers   13  2
*/
