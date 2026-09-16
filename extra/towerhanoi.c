#include<stdio.h>
  char scrn[100][100];

int main(){
  int ch;

  for (int i=0;i<=100;i++){for (int j=0;j<=100;j++){scrn[i][j]="=";}}

  while(1){
  for (int i=0;i<=100;i++){for (int j=0;j<=100;j++){
  printf("%c",scrn[i][j]);}printf("\n");
  pro();
  }
  return 0;
}
