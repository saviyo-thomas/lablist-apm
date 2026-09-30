#include<stdio.h>
void  padding(int  r){
  for(int  i =0 ; i<r; i++)
    printf(" ");
}

void zpattern(int rno)
{

  for(int a=0;a<rno;a++){
    padding(rno/2);
    if(a==0||a==rno-1)
      for(int b=0;b<rno;b++){
        printf("* ");
      }
    else{
      for(int c=rno;c>a+1;c--){printf("  ");}
      printf("*");
    }
    printf("\n");
  }
}


int main(){
  int rows,space,p;
  printf("Enter no. of rows: ");
  scanf("%d",&rows);

  for(int i=0;i<rows;i++){
    
    for(space=0;space<=rows-i;space++){printf(" ");}
       
    for(int a=0;a<=i;a++){
      if(a==0||i==0) p=1;
      else{p=p*(i-a+1)/a;}
      printf("%d ",p);
    }
    printf("\n");
  }

  printf("\n");
  zpattern(rows);
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
