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

