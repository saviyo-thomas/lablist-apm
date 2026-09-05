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
