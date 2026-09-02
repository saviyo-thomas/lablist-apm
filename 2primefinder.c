//to identufy prime numbers and separate them

#include<stdio.h>

int main(){
  int inp[100], i=0, lim, op[100], opcount=0;
  printf("\nEnter how many numbers to be inserted");
  scanf("%d", &lim);
  while(i<lim){
    printf("\nEnter numbers: ");
    scanf("%i", &inp[i]);
    i++;
  }
  for(int a=0;a<lim;a++){
    int fl=1;
    for(int b=2;b<inp[a];b++){
      if(inp[a]%b==0){
        fl=0;
      }}
    if(fl==1){
      op[opcount]=inp[a];
      opcount++;
  }}
  i=0;
  printf("\nList of prime numbers ");
  while (i<opcount){
    printf("  %d",op[i]);
    i++;
  }
  printf("\n");
  return 0;
}

