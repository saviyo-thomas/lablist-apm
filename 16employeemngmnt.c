#include<stdio.h>

typedef struct employee{
  char name[50];
  int id;
  float sal;
  char dept[50]
}e;

void ip(){}
void dis(){}
void update(){}


int main(){
  int ch,id,;
  float sal;
  char n[50],d[50];
  e em[50];

  while (1){
    printf("\n------Menu------\n1.Enter employee details\n2.Update employee details\n3.Display employee details\nEnter choice :");
    scanf("%d",&ch);
    switch(ch){
      case 1: {
                printf("\n Enter employee name :");
                fgets(n,sizeof(n),stdin);
                printf("\nEnter employee id :");
                scanf("%d",&id);
                printf("\nEnter departent:");
                fgets(d,sizeof(d),stdin);
                printf("\nEnter salary: ");
                scanf("%.2f",&sal);
                ip(n,d,id,sal); 
                break;}
      case 2: {update(); break;}
      case 3: {dis();break;}
      default :printf("\nEnter a valid input\n"); break
    }
  }

  return 0;
}
