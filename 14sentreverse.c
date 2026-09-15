#include <stdio.h>
#include <string.h>

void reversewords(char str[], int start, int end) {
    int i;
    if (str[start] == '\0') {
        return;
    }
    for (i = start; str[i] != ' ' && str[i] != '\0'; i++);
    if (str[i] == ' ') {
        reversewords(str, i + 1, end);
    }
    for (int j = start; j < i; j++) {
        printf("%c", str[j]);
    }
    if (start != 0) {
        printf(" ");
    }
}

int main() {
    char str[100];
    printf("enter a sentence:");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    printf("reversed word order:");
    reversewords(str, 0, 0);
    printf("\n");
    return 0;
}

/*
enter a sentence:when i grow up i wanna be like wiz kh    aleefa
reversed word order:khaleefa wiz like be wanna i up gr    ow i when
*/