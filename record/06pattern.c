/*
Name: Saviyo Thomas
Roll No: CS11
Date: 03-08-2026

Experiment No: 6

Heading: Dynamic Data Display Pascals Triangle and Patterns
:
Aim: Develop an application that displays Pascal's Triangle dynamically based on user input for the number of rows. Also, create a pattern generator that can be customized with user input.

********Algorithm***********
1. Read number of rows n.
2. For i=0..n-1 print n-i spaces.
3. Set r=1, for j=0..i print r and update r=r*(i-j)/(j+1).
4. Newline for next row (Pascal's triangle).
*/

/* ************SOURCE CODE************ */

##include<stdio.h>
void  padding(int  r){
  for(int  i =0 ; i<r; i++)
    printf(" ");
}

void zpattern(int rno)
{

  for(int a=0;a<rno;a++){
    padding(rno/2);
    if(a==0||a==rno-1)
      for(int b=0;b<rno;b++){
        printf("* ");
      }
    else{
      for(int c=rno;c>a+1;c--){printf("  ");}
      printf("*");
    }
    printf("\n");
  }
}


int main(){
  int rows,space,p;
  printf("Enter no. of rows: ");
  scanf("%d",&rows);

  for(int i=0;i<rows;i++){
    
    for(space=0;space<=rows-i;space++){printf(" ");}
       
    for(int a=0;a<=i;a++){
      if(a==0||i==0) p=1;
      else{p=p*(i-a+1)/a;}
      printf("%d ",p);
    }
    printf("\n");
  }

  printf("\n");
  zpattern(rows);
 return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 06pattern.c -o 06pattern
CS2024PG01@csserver:~/lablist$ ./06pattern

Enter no. of rows: 5
      1 
     1 1 
    1 2 1 
   1 3 3 1 
  1 4 6 4 1 

  * * * * * 
        *
      *
    *
  * * * * * 

*/
