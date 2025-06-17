#include <stdio.h>
#include <string.h>

int main() {
    printf("Ingrese dos palabras: \n");
    scanf("%s, %s");
    char origen[]="brisas";
    char destino[11]="para";
    strcat(destino,origen);
    printf("destino: %s", destino);
    
    return 0;
}