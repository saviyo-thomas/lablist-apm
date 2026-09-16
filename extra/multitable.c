#include<stdio.h>
int main(){int i,j,n;
printf("\nEnter the upper limit :");
scanf("%d",&n);
for (i=1;i<=n;i++){for (j=1;j<=10;j++){
printf("\n%-2d X %-2d=%-3d",i,j,i*j);}
printf("\n");}return 0;}
