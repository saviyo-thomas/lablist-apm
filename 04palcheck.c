#include<stdio.h>
#include<string.h>
#define s 4

void pal(){

}

int ispal (char str[]){
  int l=0,r=strlen(str)-1;
  while(r>l){
    if(str[l]!=str[r]){return 0;}
    r--; l++;
  }
  return 1;
}

int main(){
  
  char str[s][11];
  printf("\n Enter Strings\n");
  for(int i=0;i<s;i++){
    fgets(str[i],11, stdin);
    str[i][strcspn(str[i], "\n")]=0;
  }

  for(int i=0;i<s;i++){
    if(ispal(str[i])){printf("\n%s is palindrome",str[i]);}
    else{printf("\n%s is not a palindrome",str[i]);}
  }
  return 0;
}
