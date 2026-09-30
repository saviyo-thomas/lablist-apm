/*
Name: Saviyo Thomas
Roll No: CS11
Date: 03-08-2026

Experiment No: 6

Heading: Dynamic Data Display Pascals Triangle and Patterns

Aim: Develop an application that displays Pascal's Triangle dynamically based on user input for the number of rows. Also, create a pattern generator that can be customized with user input.

********Algorithm***********
1. Read number of rows n.
2. For i=0..n-1 print n-i spaces.
3. Set r=1, for j=0..i print r and update r=r*(i-j)/(j+1).
4. Newline for next row (Pascal's triangle).
*/
/* ************SOURCE CODE************ */
#include<stdio.h>
int main()
{
 int i,j,n,r;
 printf("enter the number of rows: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i;j++)
  {
   printf(" ");
  }
  r=1;
  for(j=0;j<=i;j++)
  {
   printf("%d ",r);
   r=r*(i-j)/(j+1);
  }
  printf("\n");
 }
 return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 06pattern.c -o 06pattern
CS2024PG01@csserver:~/lablist$ ./06pattern
enter the number of rows:      1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
*/
