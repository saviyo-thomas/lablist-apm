#include <stdio.h>
#include <string.h>
#define LIM 50

char cmail[LIM][50];

void check(int s) {
  for (int i = 0; i < s; i++) {

    if (cmail[i][0] == '\0') continue; 
    
    for (int j = i + 1; j < s; j++) {
      if (strcmp(cmail[i], cmail[j]) == 0) {
       
        cmail[j][0] = '\0'; 
}}}}

int main() {
  int lim;
  
  printf("\n(Max limit=%d)\nEnter number of emails: ", LIM);
  if (scanf("%d", &lim) != 1 || lim > LIM || lim <= 0) {
      return 1;
  }
  getchar();   
  for (int i = 0; i < lim; i++) {
    if (fgets(cmail[i], 50, stdin) != NULL) {
      cmail[i][strcspn(cmail[i], "\n")] = '\0';
      val(cmail[i]);
    }
  }
  
  check(lim);
  
  printf("\nUnique Emails:\n");
  for (int i = 0; i < lim; i++) {
    if (cmail[i][0] != '\0') {
      printf("%s\n", cmail[i]);
    }
  }
  
  return 0;
}

/*

   (Max limit=50)
   Enter number of emails: 5
   saviyothomas@gmail.com
   sfg@yahoo.in
   saviyothomas@gmail.com
   sfg@yahoo.in
   adgad@prot.cm
   \
   Unique Emails:
   saviyothomas@gmail.com
   sfg@yahoo.in
   adgad@prot.cm
   */

