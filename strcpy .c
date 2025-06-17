#include <stdio.h>
#include <string.h>

int main() {
    char p1[100], p2[100], p3[100];

    printf("Palabra 1: "); scanf("%s", p1);
    printf("Palabra 2: "); scanf("%s", p2);

    strcpy(p3, p1); strcpy(p1, p2); strcpy(p2, p3);

    printf("\nEl cambio es:\n'%s %s'\n", p1, p2);
    return 0;
}