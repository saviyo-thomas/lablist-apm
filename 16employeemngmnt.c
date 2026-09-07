#include<stdio.h>
#include<string.h>

struct employee{
  char name[50];
  int id;
  float sal;
  char dept[50];
}e[50];

int count=0;

void ip(char n[50],char d[50],int id, float sal){
  strcpy(e[count-1].name,n);
  strcpy(e[count-1].dept,d);
  e[count-1].id=id;
  e[count-1].sal=sal;
  count++;
  return;
}

void dis(){
  printf("\n==Employee details==");
  printf("\n=Name=\t==ID==\t=Department=\t=Salary=");
  for (int i=0;i<count;i++){
    printf("\n%s\t%d\t%s\t%2f",e[i].name,e[i].id,e[i].dept,e[i].sal);
  }
}

void update(int t){
  int temp;
  for (int i=0;i<count;i++){
    if(e[i].id==t){
      printf("\nWhat to edit?\n1.Name\n2.ID\n3.Department\n4.Salary\n5.GO BACK");
      scanf("%d",&temp);
      switch(temp){
        case 1:{
                 printf("\nEnter new name: "); 
                 fgets(e[i].name,50,stdin); 
                 break;}
        case 2:{
                 printf("\nEnter new ID :"); 
                 scanf("%d",&e[i].id); 
                 break;}
        case 3:{
                 printf("\nEnter new Department: ");
                 fgets(e[i].dept,50,stdin); 
                 break;}

        case 4:{
                 printf("\nEnter new Salary :");
                 scanf("%2f",&e[i].sal);
                 break;}
        case 5: return;
        default:
      }}
    else {printf("\nEmployee not found");}
}return;}


int main(){
  int ch,id,t;
  float sal;
  char n[50],d[50];

  while (1){
    printf("\n------Menu------\n1.Enter employee details\n2.Update employee details\n3.Display employee details\nEnter choice :");
    scanf("%d",&ch);
    switch(ch){
      case 1: {
                printf("\n Enter employee name :");
                fgets(n,50,stdin);
                printf("\nEnter employee id :");
                scanf("%d",&id);
                printf("\nEnter departent:");
                fgets(d,50,stdin);
                printf("\nEnter salary: ");
                scanf("%2f",&sal);
                ip(n,d,id,sal); 
                break;}
      case 2: {
                dis();
                printf("\nEnter the id of the employee to edit :");
                scanf("%d",&t);
                update(t); break;}
      case 3: {dis(); break;}
      default :printf("\nEnter a valid input\n"); break;
    }
  }
  return 0;
}
