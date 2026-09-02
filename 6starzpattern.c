#include<stdio.h>

int main(){
  int rno,r,space;
  printf("Enter no. of rows");
  scanf("%d",&rno);

  for(int a=0;a<rno;a++){
    if(a==0||a==rno-1)
      for(int b=0;b<rno;b++){
        printf("*");
      }
    else{
      for(int c=rno;c>a+1;c--){printf(" ");}
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
