//Program to check if given matrix is symmetric or not
#include<stdio.h>
#define m 5

int a[m][m];

void gtel(int t[m][m]){
 printf("\nEnter elements separated by space\n");
 for(int i=0;i<m;i++){ for(int j=0;j<m;j++){
   scanf("%d",&t[i][j]);
  }}
  return;
}

void check(int t[m][m]){
    for (int i=0;i<m;i++){ for (int j=0;j<mj++){
        if(t[i][j]!=t[j][i]){return;}
        printf("\n the matrix is symmetric");
    }}
}

int main(){
    int a[MAXZISE],[MAXZISE];
    gtel();
    check();
    return 0;
}