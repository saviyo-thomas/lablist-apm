#include<stdio.h>
#include<string.h>

void pal(){

}

int ispal (char str[]){
  int l=0,r=strlen(str)-1;
  while(r>l){
    if(str[l]!=str[r]){return 0;}
    r++; l++;
  }
  return 1;
}

int main(){
  
  char str[3][5]={"12456","86524","12321"};
  for(int i=0;i<3;i++){
    if(ispal(str[i])){printf("\n%s is palindrome",str[i]);}
    else{printf("\n%s is not a palindrome",str[i]);}
  }
  return 0;
}
