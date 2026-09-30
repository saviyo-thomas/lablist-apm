/*
Name: Saviyo Thomas
Roll No: CS11
Date: 18-09-2026

Experiment No: 8

Heading: Matrix Multiplication for Image Transformation

Aim: Implement matrix multiplication to apply a transformation matrix to an image. The program should accept a 2D image matrix and a transformation matrix, then output the transformed image.

********Algorithm***********
1. Read two 5x5 matrices a and b.
2. Initialise result matrix c to zero.
3. For i, j, k compute c[i][j]+=a[i][k]*b[k][j].
4. Display a, b and result c.
*/

/* ************SOURCE CODE************ */
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
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 08matrixmul.c -o 08matrixmul
CS2024PG01@csserver:~/lablist$ ./08matrixmul
First array
Enter elements separated by space
1 4 5 2 6
7 5 2 6 7 
2 1 8 3 6
4 5 8 2 6
1 3 4 9 6


Second array
Enter elements separated by space
1 2 5 3 8
7 4 8 6 4
1 2 6 8 3
1 2 3 7 6
4 8 5 6 4
First array

	[1]		[4]		[5]		[2]		[6]	
	[7]		[5]		[2]		[6]		[7]	
	[2]		[1]		[8]		[3]		[6]	
	[4]		[5]		[8]		[2]		[6]	
	[1]		[3]		[4]		[9]		[6]	

Second array

	[1]		[2]		[5]		[3]		[8]	
	[7]		[4]		[8]		[6]		[4]	
	[1]		[2]		[6]		[8]		[3]	
	[1]		[2]		[3]		[7]		[6]	
	[4]		[8]		[5]		[6]		[4]	

Multiplication result

	[60]		[80]		[103]		[117]		[75]	
	[78]		[106]		[140]		[151]		[146]	
	[44]		[78]		[105]		[133]		[86]	
	[73]		[96]		[144]		[156]		[112]	
	[59]		[88]		[110]		[152]		[110]	
*/
