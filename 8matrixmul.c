#include<stdio.h>
#define l 5

int a[l][l], b[l][l], c[l][l];

void gtel(int c[l][l]){
  for(int i=0;i<l;i++){
    for(int j=0;j<l;j++){
      printf("\nEnter element[%d][%d] :",i,j);
      scanf("%d",&c[i][j]);
  }}
  return;
}

void clr(){printf("\e[1;1H\e[2J");}

void tra(int t[l][l]){
  printf("\n");
  for int i=0;i<l;i++{ for(int j=0;j<l;j++){
    printf("\t%d\t",t[i][j]);
  }printf("\n");}
}

void mult(){
  for int i=0;i<l;i++{ for(int j=0;j<l;j++){
    c[i][j]=a
  }}

}
int main(){
  printf("\nFirst array");
  gtel(a);
  clr();
  printf("\nSecond array");
  gtel(b);
  clr();
  mult();
  tra(c)
}
