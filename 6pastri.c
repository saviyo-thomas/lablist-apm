#include<stdio.h>

int main(){
  int rows,space,p;
  printf("Enter no. of rows: ");
  scanf("%d",&rows);

  for(int i=0;i<rows;i++){
    
    for(space=1;space<=rows-i;space++){printf("\t");}
       
    for(int a=0;a<=i;a++){
      if(a==0||i==0) p=1;
      else{p=p*(i-a+1)/a;}
      printf("\t%d\t",p);
    }
    printf("\n");
  }
 return 0;
}
