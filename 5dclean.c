#include<stdio.h>
#include<string.h>
#define LIM 50

char cmail[LIM][50];

void check(int s){
 for (int i=0;i<s;i++){
   for (int j=0;j<s;j++){
     if strcmp(cmail)
 }}
}
int main(){
  int lim;
  printf("\n(Max limit=%d)\nEnter number of emails :",LIM);
  scanf("%d",&lim);
  for(int i=0;i<=lim;i++){
    fgets(cmail[i],50,stdin);
  }

  check(lim);

  for(int i=0;i<=lim;i++){
    printf("%s",cmail[i]);
  }
  return 0;
}
