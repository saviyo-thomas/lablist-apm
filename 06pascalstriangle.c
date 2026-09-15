#include<stdio.h>

int main(){
  int rows,space,p;
  printf("Enter no. of rows: ");
  scanf("%d",&rows);

  for(int i=0;i<rows;i++){
    
    for(space=1;space<=rows-i;space++){printf(" ");}
       
    for(int a=0;a<=i;a++){
      if(a==0||i==0) p=1;
      else{p=p*(i-a+1)/a;}
      printf(" %d ",p);
    }
    printf("\n");
  }
 return 0;
}


/*
   Enter no. of rows: 5
       1
      1  1     
     1  2  1
    1  3  3  1
   1  4  6  4  1
*/
