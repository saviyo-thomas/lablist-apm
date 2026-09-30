/*
Name: Saviyo Thomas
Roll No: CS11
Date: 07-09-2026

Experiment No: 7

Heading: Row Column Diagonal Sum and Transpose of Matrix

Aim: Write a program to perform matrix operations that calculate the row sum, column sum, and diagonal sum of a financial transaction matrix. Additionally, include a function to transpose the matrix for further analysis.

********Algorithm***********
1. Read 5x5 matrix elements.
2. Display menu repeatedly for search, row sum, column sum, diagonal sum, transpose, print and exit.
3. Search by linear scan, row sum by adding selected row, column sum by adding selected column, diagonal sum by adding t[i][i], transpose by b[i][j]=t[j][i].
4. Exit on choice 7.
*/

/* ************SOURCE CODE************ */
//program for 2d array operations


#include<stdio.h>

int a[5][5], b[5][5];

void gtel(int c[5][5]){
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("\nEnter element[%d][%d] :",i,j);
      scanf("%d",&c[i][j]);
  }}
  return;
}

void clr(){printf("\e[1;1H\e[2J");}

void search(int t[5][5]){
  int k;
  printf("\nEnter search key :");
  scanf("%d",&k);
  for(int i=0;i<5;i++){    for(int j=0;j<5;j++){
      if(k==t[i][j]){printf("\n Value found at a[%d][%d]",i,j); return;}
  }}
  printf("Value not found");
  return;
}

void rowsum(int t[5][5]){
  int sum=0,rch;
  printf("\nEnter the row(0-4) :");
  scanf("%d", &rch);
  for(int i=0;i<5;i++){    sum+=a[rch][i];  }
  printf("\nSum of row %d : %d",rch,sum);
  return;
}

void colsum(int t[5][5]){
  int sum=0, cch;
  printf("\nEnter the column(0-4)");
  scanf("%d",&cch);
  for(int i=0;i<5;i++){    sum+=t[i][cch];  }
  printf("\nSum of column %d : %d",cch,sum);
  return;
}

void diasum(int t[5][5]){
  int sum=0;
  for(int i=0;i<5;i++){sum+=t[i][i];}
  printf("\nSum of diagonal elements : %d",sum);
  return;
}
void tra(int t[5][5]){
   printf("\n");
   for(int i=0;i<5;i++){ for(int j=0;j<5;j++){
    printf("\t%d\t",t[i][j]);
   } printf("\n");}
   return;
}

void trans(int t[5][5]){
  int b[5][5];
  for(int i=0;i<5;i++){ for(int j=0;j<5;j++){
   b[i][j]=t[j][i];
  }}
  printf("\nTransposed array");
  tra(b);
  return;
}

int main(){
  printf("\nFirst array");
  gtel(a);
  clr();
  int ch;
  while(1){
  printf("\n1.search an element\n2.find row sum\n3.find column sum\n4.diagonal sum\n5.transpose the matrix\n6.print\n7.Exit\nEnter your choice :");
  scanf("%d",&ch);
  switch(ch){
    case 1:     search(a);      break;
    case 2:     rowsum(a);      break;
    case 3:     colsum(a);      break;
    case 4:     diasum(a);      break;
    case 5:     trans(a);       break;
    case 6:     tra(a);         break;
    case 7:     return 0;
    default:{printf("\nEnter a valid choice");}
 }}
  return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 07twod.c -o 07twod
CS2024PG01@csserver:~/lablist$ ./07twod

First array
Enter element[0][0] :1

Enter element[0][1] :7

Enter element[0][2] :4

Enter element[0][3] :5

Enter element[0][4] :1

Enter element[1][0] :5

Enter element[1][1] :2

Enter element[1][2] :5

Enter element[1][3] :3

Enter element[1][4] :9

Enter element[2][0] :7

Enter element[2][1] :4

Enter element[2][2] :5

Enter element[2][3] :8

Enter element[2][4] :6

Enter element[3][0] :4

Enter element[3][1] :2

Enter element[3][2] :5

Enter element[3][3] :3

Enter element[3][4] :1

Enter element[4][0] :4

Enter element[4][1] :5

Enter element[4][2] :3

Enter element[4][3] :
7

Enter element[4][4] :8


1.search an element
2.find row sum
3.find column sum
4.diagonal sum
5.transpose the matrix
6.print
7.Exit
Enter your choice :1

Enter search key :7

 Value found at a[0][1]
1.search an element
2.find row sum
3.find column sum
4.diagonal sum
5.transpose the matrix
6.print
7.Exit
Enter your choice :2

Enter the row(0-4) :2

Sum of row 2 : 30
1.search an element
2.find row sum
3.find column sum
4.diagonal sum
5.transpose the matrix
6.print
7.Exit
Enter your choice :3

Enter the column(0-4)2

Sum of column 2 : 22
1.search an element
2.find row sum
3.find column sum
4.diagonal sum
5.transpose the matrix
6.print
7.Exit
Enter your choice :4

Sum of diagonal elements : 19
1.search an element
2.find row sum
3.find column sum
4.diagonal sum
5.transpose the matrix
6.print
7.Exit
Enter your choice :5

Transposed array
	1		5		7		4		4	
	7		2		4		2		5	
	4		5		5		5		3	
	5		3		8		3		7	
	1		9		6		1		8	

1.search an element
2.find row sum
3.find column sum
4.diagonal sum
5.transpose the matrix
6.print
7.Exit
Enter your choice :6

	1		7		4		5		1	
	5		2		5		3		9	
	7		4		5		8		6	
	4		2		5		3		1	
	4		5		3		7		8	

1.search an element
2.find row sum
3.find column sum
4.diagonal sum
5.transpose the matrix
6.print
7.Exit
Enter your choice :7

*/
