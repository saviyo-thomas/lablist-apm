#include<stdio.h>
#include<stdbool.h>

int main(){
  int lim;
  printf("Enter uppper limit:");
  scanf("%d",&lim);
  //initialisation
  bool p[lim];
  for(int a=0;a<=lim;a++){
    p[a]=true;
  }

  p[0]=false;
  p[1]=false;
  
  for(int i=2;i<=lim-1;i++){
   if(p[i]){
    for(int j=i*i;j<=lim-1;j+=i){
     p[j]=false;
  }}}
  for(int r=0;r<=lim-1;r++){
    if(p[r]==true){
      printf(" %d",r);
    }
  }
 
  return 0;
}

/*
   Enter uppper limit:100
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
 */
