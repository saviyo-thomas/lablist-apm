#include<stdio.h>
#include<string.h>
#define LIM 50

char cmail[LIM][50];

void check(int s){
 for (int i=0;i<s-1;i++){
   for (int j=0;j<s;j++){
     if (strcmp(cmail[i],cmail[j])==0){ cmail[j][0]='\0';}
}}}
int main(){
  int lim;
  printf("\n(Max limit=%d)\nEnter number of emails :",LIM);
  if(scanf("%d",&lim)!=1||lim>LIM){return 1;}
  getchar(); //!!buffer clearup
  for(int i=0;i<=lim;i++){
    fgets(cmail[i],50,stdin);
    cmail[i][strcspn(cmail[i], "\n")]='\0';
  }

  check(lim);

  printf("\nUnique Emails:\n");
  for(int i=0;i<=lim;i++){
    if (cmail[i][0]!='\0'){ printf("%s\n",cmail[i]);}
} return 0;}
