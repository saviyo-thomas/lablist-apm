/*
Name: Saviyo Thomas
Roll No: CS12
Date: 18/09/2026
AIM: Implement matrix multiplication to apply a transformation matrix to an image. The program should accept a 2D image matrix and a transformation matrix, then output the transformed image.
ALGORITHM:
Step 1: Start
Step 2: Read first 5x5 matrix a and second 5x5 matrix b
Step 3: Initialize result matrix c to zero
Step 4: For i=0 to 4, for j=0 to 4, for k=0 to 4 compute c[i][j]+=a[i][k]*b[k][j]
Step 5: Display matrices a, b and result c
Step 6: Stop
*/
#include<stdio.h>
#define m 5

int a[m][m], b[m][m], c[m][m];

void gtel(int t[m][m]){
 printf("\nEnter elements separated by space\n");
 for(int i=0;i<m;i++){ for(int j=0;j<m;j++){
   scanf("%d",&t[i][j]);
  }}
  return;
}

void clr(){printf("\e[1;1H\e[2J");}

void tra(int t[m][m]){
  printf("\n");
  for (int i=0;i<m;i++){ for(int j=0;j<m;j++){
    printf("\t[%d]\t",t[i][j]);
  }
  printf("\n");
}}

void mult(){
  for (int i=0;i<m;i++){ for(int j=0;j<m;j++){
    c[i][j]=0;
  }}
  for (int i=0;i<m;i++){ for(int j=0;j<m;j++){ for(int k=0;k<m;k++){
    c[i][j]+=a[i][k]*b[k][j];
}}}}

int main(){
  printf("\nFirst array");
  gtel(a);
  clr();
  printf("\nSecond array");
  gtel(b);
  clr();
  mult();

  printf("\nFirst array\n");
  tra(a);
  printf("\nSecond array\n");
  tra(b);
  printf("\nMultiplication result\n");
  tra(c);
  return 0;
}

/*
Input:
Matrix A:
1 2 6 3 5
8 5 5 6 3
4 3 5 8 6
1 2 8 2 1
5 6 2 7 3
Matrix B:
6 7 5 8 3
7 7 5 2 5
7 4 8 2 9
4 2 5 6 8
2 5 6 3 4
Output:

First array
Enter elements separated by space

Second array
Enter elements separated by space

First array

	[1]		[2]		[6]		[3]		[5]	
	[8]		[5]		[5]		[6]		[3]	
	[4]		[3]		[5]		[8]		[6]	
	[1]		[2]		[8]		[2]		[1]	
	[5]		[6]		[2]		[7]		[3]	

Second array

	[6]		[7]		[5]		[8]		[3]	
	[7]		[7]		[5]		[2]		[5]	
	[7]		[4]		[8]		[2]		[9]	
	[4]		[2]		[5]		[6]		[8]	
	[2]		[5]		[6]		[3]		[4]	

Multiplication result

	[84]		[76]		[108]		[57]		[111]	
	[148]		[138]		[153]		[129]		[154]	
	[124]		[115]		[151]		[114]		[160]	
	[86]		[62]		[95]		[43]		[105]	
	[120]		[114]		[124]		[107]		[131]
*/
