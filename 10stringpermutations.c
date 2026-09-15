#include <stdio.h>
#include <string.h>


void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int start, int end) {
    int i;
    if (start == end) {printf("%s\t", str);} 
    else {for (i = start; i <= end; i++) {
      swap((str + start), (str + i));
      permute(str, start + 1, end);
      swap((str + start), (str + i));
}}}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("\nPermutations of '%s':\n", str);
    permute(str, 0, n - 1);

    return 0;
}

/*
   Enter a string: poke

   Permutations of 'poke':
   poke    poek    pkoe    pkeo    peko    peok    opke    opek
   okpe    okep    oekp    oepk    kope    koep    kpoe    kpeo
   kepo    keop    eokp    eopk    ekop    ekpo    epko    epok
 */
