#include<stdio.h>
#include<string.h>

int ispal (char str[]){
  int l=0,r=strlen(str)-1;
  while(r>l){
    if(str[l]!=str[r]){return 0;}
    r--; l++;
  }
  return 1;
}

int main(){
  
  char str[10][10];
  int lim;
  printf("\nEnter the number of strings(max limit=10) :");
  scanf("%d",&lim);

  for(int i=0;i<lim;i++){
    printf("\nEnter string %d (char limit=10):",i);
    scanf("%9s",str[i]);
  }

  printf("\n==^==^== Report ==^==^==\n");
  for(int i=0;i<lim;i++){
    if(ispal(str[i])){
      printf("\n%s is palindrome",str[i]);}
    else{
      printf("\n%s is not a palindrome",str[i]);}
  }
  printf("\n");
  return 0;
}
