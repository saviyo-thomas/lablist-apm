/*
Name: Saviyo Thomas
Roll No: CS11
Date: 19-07-2026

Experiment No: 3

Heading: Sieve of Eratosthenes Prime Generator

Aim: Implement the Sieve of Eratosthenes algorithm to generate a list of prime numbers up to a specified upper limit (e.g., 10,000). This list will be used for efficient lookups in a mathematical application.

********Algorithm***********
1. Read upper limit lim and initialise boolean array p to true.
2. Set p[0]=false and p[1]=false.
3. For i=2 to lim-1 if p[i] is true mark multiples j=i*i to lim-1 as false.
4. Display all r where p[r] is true.
*/
/* ************SOURCE CODE************ */
#include<stdio.h>
#include<stdbool.h>

int main(){
  int lim;
  printf("Enter uppper limit:");
  scanf("%d",&lim);
  //initialisation
  bool p[lim];
  for(int a=0;a<=lim;a++){
    p[a]=true;
  }

  p[0]=false;
  p[1]=false;
  
  for(int i=2;i<=lim-1;i++){
   if(p[i]){
    for(int j=i*i;j<=lim-1;j+=i){
     p[j]=false;
  }}}
  for(int r=0;r<=lim-1;r++){
    if(p[r]==true){
      printf(" %d",r);
    }
  }
 
  return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 03sieveoferatosthenes.c -o 03sieveoferatosthenes
CS2024PG01@csserver:~/lablist$ ./03sieveoferatosthenes
Enter uppper limit: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/
