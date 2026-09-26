/*
Name: Saviyo Thomas
Roll No: CS12
Date: 20/09/2026
AIM: Develop an application that displays Pascal's Triangle dynamically based on user input for the number of rows. Also, create a pattern generator (e.g., number or star pattern) that can be customized with user input.
ALGORITHM:
Step 1: Start
Step 2: Read number of rows rno
Step 3: For a=0 to rno-1 repeat Steps 4-5
Step 4: If a==0 or a==rno-1 print rno stars, else print rno-a-1 spaces followed by single *
Step 5: Print newline
Step 6: Stop
*/
#include<stdio.h>

int main(){
  int rno,r,space;
  printf("Enter no. of rows");
  scanf("%d",&rno);

  for(int a=0;a<rno;a++){
    if(a==0||a==rno-1)
      for(int b=0;b<rno;b++){
        printf("*");
      }
    else{
      for(int c=rno;c>a+1;c--){printf(" ");}
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}

/*
Input:
8
Output:
Enter no. of rows********
      *
     *
    *
   *
  *
 *
********
*/
