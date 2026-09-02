#include<stdio.h>
#define m 5

int a[m][m], b[m][m], c[m][m];

void gtel(int t[m][m]){
  for(int i=0;i<m;i++){ for(int j=0;j<m;j++){
      printf("\nEnter element[%d][%d] :",i,j);
      scanf("%d",&t[i][j]);
  }}
  return;
}

void clr(){printf("\e[1;1H\e[2J");}

void tra(int t[m][m]){
  printf("\n");
  for (int i=0;i<m;i++){ for(int j=0;j<m;j++){
    printf("\t%d\t",t[i][j]);
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
  tra(c);
  return 0;
}
