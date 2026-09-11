// program to categorize a string characters into vowels, consonants, special characters and numbers

#include<stdio.h>
#include<ctype.h>

int main(){
  char ips[20];
  int i=0;
  printf("\nEnter the input string:");
  fgets(ips, 20, stdin);
  while(ips[i]!='\0' && ips[i]!='\n'){
 
    char c = tolower(ips[i]);
    if(isalpha(c)){
      int isv;
      switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          printf("\n%c - vowel", ips[i]);
          break;
        default:
          printf("\n%c - consonant",ips[i]);
      }
    }
    else if (isdigit(ips[i])){
        printf("\n %c - digit",ips[i]);
    }
    else printf("\n %c - other character.\n", ips[i]);
    i++;
  }
  printf("\n");
  return 0;
}
