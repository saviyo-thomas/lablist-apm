/*
Name: Saviyo Thomas
Roll No: CS11
Date: 28-09-2026

Experiment No: 2

Heading: Prime Number Finder from List

Aim: Write a program that scans a list of numbers and identifies which ones are prime. It should store the prime numbers separately for further processing.

********Algorithm***********
1. Read limit lim and read lim numbers into array.
2. For each number set flag=1 and for b=2 to num-1 if num%b==0 set flag=0.
3. If flag==1 store number in prime array.
4. Display prime array.
*/
/* ************SOURCE CODE************ */
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
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 02primefinder.c -o 02primefinder
CS2024PG01@csserver:~/lablist$ ./02primefinder

Enter how many numbers to be inserted :
Enter numbers: 
Enter numbers: 
Enter numbers: 
Enter numbers: 
Enter numbers: 
List of prime numbers   13  2
*/
