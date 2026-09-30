/*
Name: Saviyo Thomas
Roll No: CS11
Date: 29-08-2026

Experiment No: 10

Heading: String Permutations Generator

Aim: Write a program that generates all possible permutations of a given string, which could simulate a password-cracking tool for security testing.

********Algorithm***********
1. Read string and find length n.
2. Call permute with start=0 and end=n-1.
3. If start==end print string else for i=start to end swap start and i, recurse with start+1, then swap back.
*/
/* ************SOURCE CODE************ */
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
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 10stringpermutations.c -o 10stringpermutations
CS2024PG01@csserver:~/lablist$ ./10stringpermutations
Enter a string: 
Permutations of 'poke':
poke	poek	pkoe	pkeo	peko	peok	opke	opek	okpe	okep	oekp	oepk	kope	koep	kpoe	kpeo	kepo	keop	eokp	eopk	ekop	ekpo	epko	epok	
*/
